#pragma once
#include "font.h"
#include "Point.h"

namespace miit::text 
{
	class Text 
	{
	public:
		/*
		@brief �������������� ����� ������ ������ Text
		@param text �����
		@param start_point ��������� �����
		*/
		Text(const std::string& text, const Font& font, const Point& start_point);

		/*
		@brief ��������� ������
		@param text ����� �����
		*/
		void set_text(const std::string& text);

		/*
		@brief ��������� ������
		@return �����
		*/
		std::string get_text();

		/*
		@brief ������ ������ ������
		@param font ����������
		*/
		void set_font(const Font& font);

		/*
		@brief ��������� ������
		@return �����
		*/
		Font get_font() const;


		/*
		@brief ������ ����� ������ ������
		@param start_point ����� ����� ������
		*/
		void set_start_point(const Point& start_point);

		/*
		@brief ��������� ����� ������ ������
		@return ����� ������ ������
		*/
		Point get_start_point() const;

		
		/*
		@brief �������������� ������� � ������
		@return ������ � ����������� �������
		*/
		std::string to_string() const;

		/*
		@brief ���������� ��������� ������ ������
		@param os ����� ������
		@param text �����
		@return ����� ������
		*/
		friend std::ostream& operator<< (std::ostream& os, const Text& text);

		/*
		@brief ���������� ��������� ���������
		@param lha ������ �������� ��� ���������
		@param rha ������ �������� ��� ���������
		@return true - �����, false - �������
		*/
		friend bool operator ==(const Text& lha, const Text& rha);

	private:
		Point start_point;
		Font font;
		std::string text;
	};
}