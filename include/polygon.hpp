#pragma once

#include<iostream>
#include<vector>
#include "point.hpp"
#include "shape.hpp"

class Polygon : public Shape
{
protected:
	std::vector<Point> _points;
public:
	Polygon(std::vector<Point> p = {});
	int numOfPoint() const;
	std::vector<double> getSides() const;
	std::vector<Point> getPoints() const;
};