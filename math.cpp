#include "math.h"
#include <iostream>

bool miit::math::equal_of_doubles(const double lha, const double rha)
{
    return abs(lha - rha) <= std::numeric_limits<double>::min();
}
