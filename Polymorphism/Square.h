#pragma once
#include "Shape.h"
class Square : public Shape
{
public:
	Square(double side);
	double area() const override;

private:
	double myside;
};

