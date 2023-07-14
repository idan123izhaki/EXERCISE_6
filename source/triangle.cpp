#include <iostream>
#include <vector>
#include "triangle.hpp"

Triangle::Triangle(Point p1, Point p2, Point p3)
{
	this->_points.push_back(p1);
	this->_points.push_back(p2);
	this->_points.push_back(p3);
}

Point Triangle::getP1() const
{
	return this->_points[0];
}

Point Triangle::getP2() const
{
	return this->_points[1];
}

Point Triangle::getP3() const
{
	return this->_points[2];
}

double Triangle::perimeter() const 
{
	std::vector<double> sides = this->getSides();
	return (sides[0] + sides[1] + sides[2]);
}

double Triangle::area() const
{
	std::vector<double> sides = this->getSides();
	double temp = this->perimeter() / 2;
	double area = sqrt(temp * (temp - sides[0]) * (temp - sides[1]) * (temp - sides[2]));
	return area;
}

std::string Triangle::className() const
{
	return "Triangle";
}