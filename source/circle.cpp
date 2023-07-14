#include <iostream>
#include "circle.hpp"

#define PI 3.14159265359

Circle::Circle(Point p, double radius) : _center(p), _radius(radius) {}

Point Circle::getCenter() const
{
	return this->_center;
}

double Circle::getRadius() const
{
	return this->_radius;
}

double Circle::perimeter() const
{
	return 2 * PI * this->getRadius();
}

double Circle::area() const
{
	return PI * this->getRadius() * this->getRadius();
}

std::string Circle::className() const
{
	return "Circle";
}
