#pragma once
#include <iostream>

namespace miit::text 
{
	class Color 
	{
	public:
		/*
		@brief �������������� ����� ������ ������ Color
		@param r �������� �������� �����
		@param g �������� �������� �����
		@param b �������� ������ �����
		*/
		Color(const int r, const int g, const int b);

		/*
		@brief ���������� ��������� ���������
		@param lha ������ �������� ��� ���������
		@param rha ������ �������� ��� ���������
		@return true - �����, false - �������
		*/
		friend bool operator ==(const Color& lha, const Color& rha);

		/*
		@brief ���������� ��������� ������ ������
		@param os ����� ������
		@param color ����
		@return ����� ������
		*/
		friend std::ostream& operator<< (std::ostream& os, const Color& color);
	private:
		int r;
		int g;
		int b;
	};
}