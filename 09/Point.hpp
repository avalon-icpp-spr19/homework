#pragma once
#include <cmath>

namespace my
{
	/*
		Пользовательский тип данных, описывает точку на плоскости
	*/
	struct Point
	{
		float x;
		float y;
	};

	/*
		Пользовательский тип данных, указавает на квадрант, в котором может лежать
	*/
	enum Quadrant
	{
		First, Second, Third, Fourth
	};

	/*
		Функция, вычисляет расстояние между двумя точками
	*/
	float getDistanceTo(Point first, Point second)
	{
		return sqrt(
			pow(first.x - second.x, 2) +
			pow(first.y - second.y, 2)
		);
	}

	/*
		Функция, возвращает точку с "противоположными" координатами
		Например, для точки с координатами (2,3) функция вернет точку (-2,-3)
	*/
	Point getAntipodePoint(Point point)
	{
		return Point { -point.x, -point.y };		
	}

	/*
		Функция, возвращает квадрант передаваемой точки
	*/
	Quadrant getQuadrant(Point point)
	{
		if (point.x >= 0 && point.y >= 0)
		{
			return Quadrant::First;
		}
		else if(point.x < 0 && point.y >= 0)
		{
			return Quadrant::Second;
		}
		else if (point.x < 0 && point.y < 0)
		{
			return Quadrant::Third;
		}
		else
		{
			return Quadrant::Fourth;
		}
	}

	/*
		Функция, меняет местами значение координат точек
	*/
	void swap(Point * lhs, Point * rhs)
	{
		Point temp = *lhs;
		*lhs = *rhs;
		*rhs = temp;
	}
}
