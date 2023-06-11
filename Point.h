#pragma once
#include <iostream>

namespace miit::text 
{
	struct  Point
	{
        /*
        @brief инициализирует новый объект класса Point
        @param x - абсцисса
        @param y - ордината
        */
        Point(const double x = 0, const double y = 0);

        /*
        @brief Перегрузка оператора потока вывода
        @param os поток вывода
        @param point точка
        @return Поток вывода
        */
        friend std::ostream& operator<< (std::ostream& os, const Point& point);

        /*
        @brief Перегрузка оператора сравнения
        @param lhs Первый аргумент
        @param rhs Второй аргумент
        @return Поток вывода
        */
        friend bool operator ==(const Point& lha, const Point& rha);

        double x;
        double y;


	};
}