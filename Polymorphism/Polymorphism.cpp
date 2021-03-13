// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

template <class T>

void printArea(const T& shape)
{
    std::cout << shape.area() << "\n";
}


int main()
{
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };

    printArea(r1);
    printArea(s1);
    printArea(c1);
}


