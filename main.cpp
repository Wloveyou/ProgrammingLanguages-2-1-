#include <iostream>
#include "../Text/Text.h"


using namespace miit::text;

int main()
{
	Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
	std::cout << text_1;
	return 0;
}