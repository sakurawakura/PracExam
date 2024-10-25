// Game.hpp
#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <tuple>
#include <iostream>
#include "Explorer.hpp"
#include "Exit.hpp"
#include "Pit.hpp"

enum GameState { WIN, LOSE, PLAYING };

class Game {
private:
    int width;
    int height;
    Explorer* player;
    Exit* exit;
    std::vector<Pit*> pits;
    GameState state;

public:
    Game(int width, int height, std::vector<std::tuple<int, int>> pitCoordinates);
    ~Game();  // Destructor to clean up dynamically allocated objects
    bool displayState();
    void movePlayer(int dx, int dy);
    void printGrid();
    GameState getState() const; // For testing purposes
};

#endif

