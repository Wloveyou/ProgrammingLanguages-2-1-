#include "font.h"

miit::text::Font::Font(const std::string& name, const Color& color, const int size)
	:name(name), color(color), size(size)
{
}

void miit::text::Font::set_color(const Color& color)
{
	this->color = color;
}

void miit::text::Font::set_size(const int size)
{
	this->size = size;
}

const miit::text::Color& miit::text::Font::get_color() const
{
	return this->color;
}

const int miit::text::Font::get_size() const
{
	return this->size;
}

std::ostream& miit::text::operator<<(std::ostream& os, const Font& font)
{
	return os << "Name: " << font.name << " Color: " << font.color << " Size: " << font.size;
}

bool miit::text::operator==(const Font& lha, const Font& rha)
{
	return lha.name == rha.name && lha.color == rha.color && lha.size == rha.size;
}
