#pragma once
#include"Shape.h"

class Circle : public Shape
{
public:
	Circle(double radius);
	double area() const override;

private:
	double myradius;
};

