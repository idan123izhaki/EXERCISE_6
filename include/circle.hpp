#pragma once

#include "shape.hpp"
#include "point.hpp"

class Circle : public Shape
{
	Point _center;
	double _radius;

public:
	Circle(Point, double);
	Point getCenter() const;
	double getRadius() const;
	double perimeter() const override;
	double area() const override;
	std::string className() const override;
};