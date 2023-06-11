#include "Point.h"
#include "../Text/math.h"

miit::text::Point::Point(const double x, const double y)
    :x(x), y(y)
{
}

std::ostream& miit::text::operator<<(std::ostream& os, const Point& point)
{
    return os << "Point: " << point.x << ", " << point.y;
}

bool miit::text::operator==(const Point& lha, const Point& rha)
{
    return miit::math::equal_of_doubles(lha.x, rha.x) && miit::math::equal_of_doubles(lha.y, rha.y);
}
