#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(double width, double height);

private:
	double mywidth;
	double myheight;
};

