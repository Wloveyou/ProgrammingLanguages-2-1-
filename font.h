#pragma once
#include "color.h"

namespace miit::text 
{
	class Font 
	{
	public:
		/*
		@brief инициализирует новый объект класса Font
		@param name Имя шрифта
		@param color Цвет шрифта
		@param size Размер шрифта
		*/
		Font(const std::string& name, const Color& color, const int size);

		/*
		@brief Перегрузка оператора потока вывода
		@param os поток вывода
		@param fonst шрифт
		@return Поток вывода
		*/
		friend std::ostream& operator<< (std::ostream& os, const Font& font);

		/*
		@brief Перегрузка оператора сравнения
		@param lha Первый параметр для сравнения
		@param rha Второй параметр для сравнения
		@return true - равны, false - неравны
		*/
		friend bool operator ==(const Font& lha, const Font& rha);

		/*
		@brief Изменение цвета шрифта
		@param color Новый цвет
		*/
		void set_color(const Color& color);

		/*
		@brief Изменение размера шрифта
		@param size Новый размер
		*/
		void set_size(const int size);

		/*
		@brief Получение цвета шрифта
		@return Цвет шрифта
		*/
		const Color& get_color() const;

		/*
		@brief Получение размера шрифта
		@return Размер шрифта
		*/
		const int get_size() const;

	private:
		std::string name;
		Color color;
		int size;
	};
}
