#include <iostream>
#include "Explorer.hpp"
#include "Exit.hpp"
#include "Pit.hpp"
#include "Interactable.hpp"  // Include for getActiveInteractableCount


int main() {
    // Create a 4x3 grid
    int gridWidth = 4;
    int gridHeight = 3;

    Explorer player(gridWidth, gridHeight);
    Exit exit(gridWidth, gridHeight);
    Pit pit1(1, 1, gridWidth, gridHeight); // Place a pit
    Pit pit2(2,2, gridWidth, gridHeight);


    std::cout << "Initial Player Stamina: " << player.getStamina() << std::endl;
    std::cout << "Active Interactables: " << Interactable::getActiveInteractableCount() << std::endl;


    // Example movements and interactions
    player.move(1, 0); // Try an invalid move
    player.move(1,0);
    player.move(0,1);
     if (pit1.interact(&player)) {
        std::cout << "Player fell in pit1 and lost!" << std::endl;
        return 0; // Game over
    }
        std::cout << "Player Stamina after pit1: " << player.getStamina() << std::endl;

    player.move(1,0);
    player.move(0,1);

    if(pit2.interact(&player)){
        std::cout << "Player fell in pit2 and lost!" << std::endl;
        return 0; // Game over
    };
        std::cout << "Player Stamina after pit2: " << player.getStamina() << std::endl;



    player.move(0,-1);
    player.move(1,0);

    if (exit.interact(&player)) {
        std::cout << "Player reached the exit!" << std::endl;
    } else {
        std::cout << "Player did not reach the exit." << std::endl;
    }

    std::cout << "Final Player Stamina: " << player.getStamina() << std::endl;
    std::cout << "Active Interactables: " << Interactable::getActiveInteractableCount() << std::endl;



    return 0;
}