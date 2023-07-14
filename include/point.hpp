#pragma once

class Point
{
	double _x;
	double _y;

public:
	Point(double, double);
	double getX() const;
	double getY() const;
	void move(double, double);
	void move(Point);
	double distance(Point) const;
};