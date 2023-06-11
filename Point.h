#pragma once
#include <iostream>

namespace miit::text 
{
	struct  Point
	{
        /*
        @brief �������������� ����� ������ ������ Point
        @param x - ��������
        @param y - ��������
        */
        Point(const double x = 0, const double y = 0);

        /*
        @brief ���������� ��������� ������ ������
        @param os ����� ������
        @param point �����
        @return ����� ������
        */
        friend std::ostream& operator<< (std::ostream& os, const Point& point);

        /*
        @brief ���������� ��������� ���������
        @param lhs ������ ��������
        @param rhs ������ ��������
        @return ����� ������
        */
        friend bool operator ==(const Point& lha, const Point& rha);

        double x;
        double y;


	};
}