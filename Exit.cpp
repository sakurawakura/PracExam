// Exit.cpp
#include "Exit.hpp"
#include "Explorer.hpp"

Exit::Exit(int width, int height) : Interactable(width - 1, height - 1, width, height) {} // Exit at (w-1, h-1)

bool Exit::interact(Explorer* player)  {
    return Helper::absoluteSquaredDistance(getCoordinates(), player->getCoordinates()) == 0;
}

InteractableType Exit::getType() {
    return EXIT;
}
