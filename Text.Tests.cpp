#include "pch.h"
#include "CppUnitTest.h"
#include "../Text/Text.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::text;

namespace TextTests
{
	TEST_CLASS(TextTests)
	{
	public:
		
		TEST_METHOD(PointEqual_ValidData_Success)
		{
			Point point_1(1, 1);
			Point point_2(1, 1);
			Assert::IsTrue(point_1 == point_2);
		}

		TEST_METHOD(PointOutput_ValidData_Success)
		{
			Point point_1(1, 1);
			std::stringstream test_sstring;
			test_sstring << point_1;
			Assert::IsTrue(test_sstring.str() == "Point: 1, 1");
		}

		TEST_METHOD(Ctor_ColorInvalidParam_ExeptionExpected)
		{
			Assert::ExpectException<std::out_of_range>([]()
				{auto x = Color(-1,-1,-1); });
		}

		TEST_METHOD(ColorEqual_ValidData_Success)
		{
			Color color_1(1, 1, 1);
			Color color_2(1, 1, 1);
			Assert::IsTrue(color_1 == color_2);
		}

		TEST_METHOD(ColorOutput_ValidData_Success)
		{
			Color color_1(1, 1, 1);
			std::stringstream test_sstring;
			test_sstring << color_1;
			Assert::IsTrue(test_sstring.str() == "Color: (1, 1, 1)");
		}

		TEST_METHOD(FontEqual_ValidData_Success)
		{
			Font font_1 { "font", Color(1,1,1), 10 };
			Font font_2 { "font", Color(1,1,1), 10 };
			Assert::IsTrue(font_1 == font_2);
		}

		TEST_METHOD(FontOutput_ValidData_Success)
		{
			Font font_1{ "font", Color(1,1,1), 10 };
			std::stringstream test_sstring;
			test_sstring << font_1;
			Assert::IsTrue(test_sstring.str() == "Name: font Color: Color: (1, 1, 1) Size: 10");
		}

		TEST_METHOD(FontGetColor_ValidData_Success)
		{
			Font font_1{ "font", Color(1,1,1), 10 };
			Assert::IsTrue(font_1.get_color() == Color(1, 1, 1));
		}

		TEST_METHOD(FontSetColor_ValidData_Success)
		{
			Font font_1{ "font", Color(1,1,1), 10 };
			font_1.set_color(Color(2, 2, 2));
			Assert::IsTrue(font_1.get_color() == Color(2,2,2));
		}

		TEST_METHOD(FontGetSize_ValidData_Success)
		{
			Font font_1{ "font", Color(1,1,1), 10 };
			Assert::IsTrue(font_1.get_size() == 10);
		}

		TEST_METHOD(FontSetSize_ValidData_Success)
		{
			Font font_1{ "font", Color(1,1,1), 10 };
			font_1.set_size(12);
			Assert::IsTrue(font_1.get_size() == 12);
		}

		TEST_METHOD(TextEqual_ValidData_Success)
		{
			Text text_1{"Here", Font("font", Color(1,1,1), 10), Point(1,1)};
			Text text_2{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			Assert::IsTrue(text_1 == text_2);
		}

		TEST_METHOD(TextOutput_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			std::stringstream test_sstring;
			test_sstring << text_1;
			Assert::IsTrue(test_sstring.str() == "Text: HereFont: Name: font Color: Color: (1, 1, 1) Size: 10Start: Point: 1, 1");
		}

		TEST_METHOD(TextToString_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			Assert::IsTrue(text_1.to_string() == "Text: HereFont: Name: font Color: Color: (1, 1, 1) Size: 10Start: Point: 1, 1");
		}

		TEST_METHOD(TextGetText_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			Assert::IsTrue(text_1.get_text() == "Here");
		}

		TEST_METHOD(TextSetText_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			text_1.set_text("Moscow");
			Assert::IsTrue(text_1.get_text() == "Moscow");
		}

		TEST_METHOD(TextGetFont_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			Assert::IsTrue(text_1.get_font() == Font("font", Color(1, 1, 1), 10));
		}

		TEST_METHOD(TextSetFont_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			text_1.set_font(Font("font", Color(2, 2, 2), 13));
			Assert::IsTrue(text_1.get_font() == Font("font", Color(2, 2, 2), 13));
		}

		TEST_METHOD(TextGetStartPoint_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			Assert::IsTrue(text_1.get_start_point() == Point(1,1));
		}

		TEST_METHOD(TextSetStartPoint_ValidData_Success)
		{
			Text text_1{ "Here", Font("font", Color(1,1,1), 10), Point(1,1) };
			text_1.set_start_point(Point(2, 2));
			Assert::IsTrue(text_1.get_start_point() == Point(2, 2));
		}

	};
}
