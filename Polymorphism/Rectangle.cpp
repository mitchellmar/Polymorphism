#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
	: mywidth{ width }, myheight{ height } {}

double Rectangle::area() const
{
	return mywidth * myheight;
}