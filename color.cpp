#include "color.h"

miit::text::Color::Color(const int r, const int g, const int b)
	:r(r), g(g), b(b)
{
	if (r < 0 || r > 255 || b < 0 || b > 255 || g < 0 || g > 255)
	{
		throw std::out_of_range("Wrong color");
	}
}

bool miit::text::operator==(const Color& lha, const Color& rha)
{
	return lha.r == rha.r || lha.g == rha.g || lha.b == rha.b;
}

std::ostream& miit::text::operator<<(std::ostream& os, const Color& color)
{
	return os << "Color: (" << color.r << ", " << color.g << ", " << color.b << ")";
}
