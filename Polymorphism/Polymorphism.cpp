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


//Q1: From this assignment it seems that static polymorphism 
// would be easier to implement and use as it required less
// coding and no knowledge of inheritance.

//Q2: From some more reaseach on the topic, I found that static 
// polymorphism "collects information at compile time" where as
// dynamic polymorphism "collects information at run time" which
// makes methods of static polymorphism faster than dynamic. Also
// from this project the static method seemed to result in cleaner code
// and we were able to eliminate an entire class vs the dynamic method.