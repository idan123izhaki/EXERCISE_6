#include <iostream>
//#include <cmath>
#include "point.hpp"

Point::Point(double x, double y) : _x(x), _y(y) {}

double Point::getX() const { return this->_x; }

double Point::getY() const { return this->_y; }

void Point::move(double x, double y)
{
	this->_x = x;
	this->_y = y;
}

void Point::move(Point other)
{
	this->_x = other.getX();
	this->_y = other.getY();
}

double Point::distance(Point other) const
{
	return pow(pow(other.getX() - this->_x, 2) + pow(other.getY() - this->_y, 2), 0.5);
}
