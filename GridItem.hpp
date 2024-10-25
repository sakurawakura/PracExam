
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
    GridItem(int x = -1, int y = 0, int width = 0, int height = 0); //onstructor acts as default
    void setCoordinates(int x, int y);
    std::tuple<int, int> getCoordinates() const;
    int getGridWidth() const;
    int getGridHeight() const;
    static int getActiveGridItemCount();
    virtual ~GridItem();
};

#endif

