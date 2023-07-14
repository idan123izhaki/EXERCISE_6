#include "quadrangle.hpp"

Quadrangle::Quadrangle(Point p1, Point p2, Point p3, Point p4)
{
	_points.push_back(p1);
	_points.push_back(p2);
	_points.push_back(p3);
	_points.push_back(p4);
}

Point Quadrangle::getP1() const { return this->_points[0]; }
Point Quadrangle::getP2() const { return this->_points[1]; }
Point Quadrangle::getP3() const { return this->_points[2]; }
Point Quadrangle::getP4() const { return this->_points[3]; }

double Quadrangle::perimeter() const
{
	std::vector<double> sides = this->getSides();
	return sides[0] + sides[1] + sides[2] + sides[3];
}

double Quadrangle::area() const
{
	std::vector<double> sides = this->getSides();
	double s = (sides[0] + sides[1] + sides[2] + sides[3]) / 2.0;
	double area = std::sqrt((s - sides[0]) * (s - sides[1]) * (s - sides[2]) * (s - sides[3]));
	return area;
}

std::string Quadrangle::className() const
{
	return "Quadrangle";
}