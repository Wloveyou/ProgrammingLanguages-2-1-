#pragma once
#include <iostream>

namespace miit::text 
{
	class Color 
	{
	public:
		/*
		@brief инициализирует новый объект класса Color
		@param r Параметр красного цвета
		@param g Параметр зеленого цвета
		@param b Параметр синего цвета
		*/
		Color(const int r, const int g, const int b);

		/*
		@brief Перегрузка оператора сравнения
		@param lha Первый параметр для сравнения
		@param rha Второй параметр для сравнения
		@return true - равны, false - неравны
		*/
		friend bool operator ==(const Color& lha, const Color& rha);

		/*
		@brief Перегрузка оператора потока вывода
		@param os поток вывода
		@param color цвет
		@return Поток вывода
		*/
		friend std::ostream& operator<< (std::ostream& os, const Color& color);
	private:
		int r;
		int g;
		int b;
	};
}