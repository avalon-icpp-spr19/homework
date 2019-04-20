#include <iostream>
#include "Point.hpp"

using namespace my;
using namespace std;

int main()
{
	Point a{ 5.5, 6.6 };
	Point b{ 7.7, 8.8 };

	cout << getDistanceTo(a, b);
	a = getAntipodePoint(a);
	Quadrant quad = getQuadrant(a);

	swap(&a, &b);
}