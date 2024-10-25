
// main-3.cpp
#include <iostream>
#include "Game.hpp"

int main() {
    std::vector<std::tuple<int, int>> pitLocations = {{3, 0}}; // Pit at (3, 0)
    Game game(4, 6, pitLocations); // Grid is 4x6 now

    game.printGrid();  // Prints initial state

    game.movePlayer(1, 0);
    if (game.displayState()) return 0;
    game.printGrid();

    game.movePlayer(1, 0);
    if (game.displayState()) return 0;
    game.printGrid();

    game.movePlayer(1, 0); // Move onto the pit
    if (game.displayState()) return 0;
    game.printGrid();

    game.movePlayer(0, 1); // Move down
    if (game.displayState()) return 0;
    game.printGrid();

    return 0;
}