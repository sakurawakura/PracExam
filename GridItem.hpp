// GridItem.hpp
#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>

class GridItem {
private:
    int x;
    int y;
    int width;
    int height;
    static int activeGridItemCount;

public:
    GridItem(int x = 0, int y = 0, int width = 0, int height = 0);
    GridItem(); // Added default constructor
    void setCoordinates(int x, int y);
    std::tuple<int, int> getCoordinates() const; // Added const
    int getGridWidth() const; // Added const
    int getGridHeight() const; // Added const
    static int getActiveGridItemCount();
    virtual ~GridItem();
};

#endif
