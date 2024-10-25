
#include "Helper.hpp"

double Helper::absoluteSquaredDistance(std::tuple<int, int> item1, std::tuple<int, int> item2) {
    int x1 = std::get<0>(item1);
    int y1 = std::get<1>(item1);
    int x2 = std::get<0>(item2);
    int y2 = std::get<1>(item2);

    return pow(abs(x2 - x1) + abs(y2 - y1) , 2); 
}
