#include <iostream>
#include "polygon.hpp"

Polygon::Polygon(std::vector<Point> points)
{
	this->_points = points;
}

int Polygon::numOfPoint() const 
{
	return (this->_points).size();
}

std::vector<double> Polygon::getSides() const
{
	std::vector<double> sides;
	int i = 0, j = 1;
	for (; j < _points.size(); ++i, ++j)
	{
		sides.push_back((_points[i]).distance(_points[j]));
	}
	sides.push_back((_points[0]).distance(_points[i]));
	return sides;
}


std::vector<Point> Polygon::getPoints() const
{
	return this->_points;
}