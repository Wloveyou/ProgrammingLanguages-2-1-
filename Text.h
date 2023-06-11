#pragma once
#include "font.h"
#include "Point.h"

namespace miit::text 
{
	class Text 
	{
	public:
		/*
		@brief инициализирует новый объект класса Text
		@param text Текст
		@param start_point Начальная точка
		*/
		Text(const std::string& text, const Font& font, const Point& start_point);

		/*
		@brief Изменения текста
		@param text Новый текст
		*/
		void set_text(const std::string& text);

		/*
		@brief Получение текста
		@return Текст
		*/
		std::string get_text();

		/*
		@brief Здание шрифта текста
		@param font Новыйшрифт
		*/
		void set_font(const Font& font);

		/*
		@brief Получение шрифта
		@return Шрифт
		*/
		Font get_font() const;


		/*
		@brief Здание точки начала текста
		@param start_point Новая точка начала
		*/
		void set_start_point(const Point& start_point);

		/*
		@brief Получение точки начала текста
		@return Точка начала текста
		*/
		Point get_start_point() const;

		
		/*
		@brief Преобразование объекта в строку
		@return Строка с параметрами объекта
		*/
		std::string to_string() const;

		/*
		@brief Перегрузка оператора потока вывода
		@param os поток вывода
		@param text текст
		@return Поток вывода
		*/
		friend std::ostream& operator<< (std::ostream& os, const Text& text);

		/*
		@brief Перегрузка оператора сравнения
		@param lha Первый параметр для сравнения
		@param rha Второй параметр для сравнения
		@return true - равны, false - неравны
		*/
		friend bool operator ==(const Text& lha, const Text& rha);

	private:
		Point start_point;
		Font font;
		std::string text;
	};
}
