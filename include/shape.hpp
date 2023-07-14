#pragma once
#include <string>

class Shape
{
public:
	virtual double perimeter() const = 0;
	virtual double area() const = 0;
	virtual std::string className() const = 0;
};