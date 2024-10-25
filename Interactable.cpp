// Interactable.cpp
#include "Interactable.hpp"

int Interactable::activeInteractableCount = 0;

Interactable::Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
    activeInteractableCount++;
}

Interactable::~Interactable() {
    activeInteractableCount--;
}

int Interactable::getActiveInteractableCount() {
    return activeInteractableCount;
}