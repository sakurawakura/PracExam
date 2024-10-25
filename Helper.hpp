// Helper.hpp
#ifndef HELPER_HPP
#define HELPER_HPP

#include <tuple>
#include <cmath>

class Helper {
public:
    static double absoluteSquaredDistance(std::tuple<int, int> item1, std::tuple<int, int> item2);
};

#endif