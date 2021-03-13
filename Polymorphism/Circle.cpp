#include "Circle.h"

Circle::Circle(double radius)
	:myradius{ radius } {}

double Circle::area() const
{
	return (3.14 * myradius * myradius);
}