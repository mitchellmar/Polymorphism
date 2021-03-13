#include "Square.h"
Square::Square(double side)
	:myside{ side } {}

double Square::area() const
{
	return myside * myside;
}

