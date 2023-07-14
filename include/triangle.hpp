#pragma once

#include "polygon.hpp"

class Triangle : public Polygon
{
public:
	Triangle(Point, Point, Point);
	Point getP1() const;
	Point getP2() const;
	Point getP3() const;
	double perimeter() const override;
	double area() const override;
	std::string className() const override;
};