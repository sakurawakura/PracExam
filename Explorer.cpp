
#include "Explorer.hpp"

Explorer::Explorer(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), stamina(2) {}

int Explorer::getStamina() const {
    return stamina;
}

void Explorer::jumpPit() {
    if (stamina > 0) {
        stamina--;
    }
}

bool Explorer::move(int xOffset, int yOffset) {
    if (xOffset != 0 && yOffset != 0) return false; // Invalid move (both x and y changed)

    int newX = std::get<0>(getCoordinates()) + xOffset;
    int newY = std::get<1>(getCoordinates()) + yOffset;

    if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
        setCoordinates(newX, newY);
        return true;
    }
    return false;
}