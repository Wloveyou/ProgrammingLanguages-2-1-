#include "Text.h"
#include <sstream>

miit::text::Text::Text(const std::string& text, const Font& font, const Point& start_point)
	:text(text), font(font), start_point(start_point)
{
}

void miit::text::Text::set_text(const std::string& text)
{
	this->text = text;
}

std::string miit::text::Text::get_text()
{
	return this->text;
}

void miit::text::Text::set_font(const Font& font)
{
	this->font = font;
}

miit::text::Font miit::text::Text::get_font() const
{
	return this->font;
}


void miit::text::Text::set_start_point(const Point& start_point)
{
	this->start_point = start_point;
}

miit::text::Point miit::text::Text::get_start_point() const
{
	return this->start_point;
}

std::string miit::text::Text::to_string() const
{
	std::stringstream sstring;
	sstring << "Text: " << this->text << "Font: " << this->font << "Start: " << this->start_point;
	return sstring.str();
}

std::ostream& miit::text::operator<<(std::ostream& os, const Text& text)
{
	return os << text.to_string();
}

bool miit::text::operator==(const Text& lha, const Text& rha)
{
	return lha.font == rha.font && lha.text == rha.text;
}
