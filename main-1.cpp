// main-1.cpp
#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    GridItem item1(0, 0, 4, 3);
    GridItem item2(3, 2, 4, 3);

    std::cout << "Active Grid Item Count: " << GridItem::getActiveGridItemCount() << std::endl;

    std::tuple<int, int> coord1 = item1.getCoordinates();
    std::tuple<int, int> coord2 = item2.getCoordinates();

    double distance = Helper::absoluteSquaredDistance(coord1, coord2);
    std::cout << "Distance: " << distance << std::endl;

    return 0;
}