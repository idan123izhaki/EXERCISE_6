#pragma once
#include "polygon.hpp"

class Quadrangle : public Polygon
{
public:
	Quadrangle(Point, Point, Point, Point);
	Point getP1() const;
	Point getP2() const;
	Point getP3() const;
	Point getP4() const;
	double perimeter() const override;
	double area() const override;
	std::string className() const override;
};