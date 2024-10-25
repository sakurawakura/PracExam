// Explorer.hpp
#ifndef EXPLORER_HPP
#define EXPLORER_HPP

#include "GridItem.hpp"

class Explorer : public GridItem {
private:
    int stamina;

public:
    Explorer(int gridWidth, int gridHeight);
    int getStamina() const; 
    void jumpPit();
    bool move(int xOffset, int yOffset);
};

#endif