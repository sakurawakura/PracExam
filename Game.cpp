// Game.cpp
#include "Game.hpp"

Game::Game(int width, int height, std::vector<std::tuple<int, int>> pitCoordinates) : width(width), height(height), state(PLAYING) {
    player = new Explorer(width, height);
    exit = new Exit(width, height);

    for (const auto& coord : pitCoordinates) {
        int x = std::get<0>(coord);
        int y = std::get<1>(coord);

        // Check if pit location clashes with player or exit
        if (!(x == 0 && y == 0) && !(x == width - 1 && y == height - 1)) {
            pits.push_back(new Pit(x, y, width, height));
        }
    }
}


Game::~Game() {
    delete player;
    delete exit;
    for (Pit* pit : pits) {
        delete pit;
    }
}


bool Game::displayState() {
    switch (state) {
        case WIN:
            std::cout << "You win!" << std::endl;
            return true;
        case LOSE:
            std::cout << "You lose :(" << std::endl;
            return true;
        case PLAYING:
            std::cout << "\n Game on \n" << std::endl;
            return false;
    }
    return false; // Should not reach here, but added for completeness
}


void Game::movePlayer(int dx, int dy) {
    if (state == PLAYING) {
        if (player->move(dx, dy)) {
            int playerX = std::get<0>(player->getCoordinates());
            int playerY = std::get<1>(player->getCoordinates());

            for (Pit* pit : pits) {
                if (playerX == std::get<0>(pit->getCoordinates()) && playerY == std::get<1>(pit->getCoordinates())) {
                    if (pit->interact(player)) {
                        state = LOSE;
                        return;
                    }
                    break; // Exit after interacting with a pit (even if player didn't lose immediately)
                }
            }
            if (state == PLAYING && exit->interact(player)) { // Check win condition only if still playing
                state = WIN;
            }
        }
    }
}

void Game::printGrid() {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            char cell = '_'; // Default character

            if (x == std::get<0>(player->getCoordinates()) && y == std::get<1>(player->getCoordinates())) {
                cell = 'X';
            } else if (x == std::get<0>(exit->getCoordinates()) && y == std::get<1>(exit->getCoordinates())) {
                cell = 'E';
            } else {
                for (const auto& pit : pits) {
                    if (x == std::get<0>(pit->getCoordinates()) && y == std::get<1>(pit->getCoordinates())) {
                        cell = 'P';
                        break; // No need to check other pits if one is found
                    }
                }
            }
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}



GameState Game::getState() const { 
    return state;
}

