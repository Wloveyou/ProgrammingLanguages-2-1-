#pragma once
#include "color.h"

namespace miit::text 
{
	class Font 
	{
	public:
		/*
		@brief �������������� ����� ������ ������ Font
		@param name ��� ������
		@param color ���� ������
		@param size ������ ������
		*/
		Font(const std::string& name, const Color& color, const int size);

		/*
		@brief ���������� ��������� ������ ������
		@param os ����� ������
		@param fonst �����
		@return ����� ������
		*/
		friend std::ostream& operator<< (std::ostream& os, const Font& font);

		/*
		@brief ���������� ��������� ���������
		@param lha ������ �������� ��� ���������
		@param rha ������ �������� ��� ���������
		@return true - �����, false - �������
		*/
		friend bool operator ==(const Font& lha, const Font& rha);

		/*
		@brief ��������� ����� ������
		@param color ����� ����
		*/
		void set_color(const Color& color);

		/*
		@brief ��������� ������� ������
		@param size ����� ������
		*/
		void set_size(const int size);

		/*
		@brief ��������� ����� ������
		@return ���� ������
		*/
		const Color& get_color() const;

		/*
		@brief ��������� ������� ������
		@return ������ ������
		*/
		const int get_size() const;

	private:
		std::string name;
		Color color;
		int size;
	};
}