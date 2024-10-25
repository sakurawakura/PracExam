// GridItem.cpp
#include "GridItem.hpp"

int GridItem::activeGridItemCount = 0;

GridItem::GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
    if (x == -1) { // Handle default constructor call (no arguments)
        this->x = 0;
    }
    activeGridItemCount++;
}

void GridItem::setCoordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

std::tuple<int, int> GridItem::getCoordinates() const {
    return std::make_tuple(x, y);
}

int GridItem::getGridWidth() const {
    return width;
}

int GridItem::getGridHeight() const {
    return height;
}

int GridItem::getActiveGridItemCount() {
    return activeGridItemCount;
}

GridItem::~GridItem() {
    activeGridItemCount--;
}