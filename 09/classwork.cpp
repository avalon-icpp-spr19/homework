#include <iostream>
#include "Point.hpp"	// подключаем написанную нами библиотеку Point

using namespace my;	// пространство имен написанной нами библиотеки Point
using namespace std;

int main()
{
	Point a{ 5.5, 6.6 };
	Point b{ 7.7, 8.8 };

	// Ниже приведены примеры использования функций из написанной библиотеки Point
	cout << getDistanceTo(a, b);
	a = getAntipodePoint(a);
	Quadrant quad = getQuadrant(a);

	swap(&a, &b);
}
