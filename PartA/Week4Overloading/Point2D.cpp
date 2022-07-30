#include "Point2D.h"

#include <cmath>

Point2D::Point2D() :
	x(0.0),
	y(0.0)
{
}

Point2D::Point2D(double x_in, double y_in) :
	x(x_in),
	y(y_in)
{
}

double Point2D::distance(const Point2D& p) const
{
	return std::hypot(
		this->x - p.x,
		this->y - p.y);
}

double Point2D::magnitude() const
{
	return std::hypot(
		this->x,
		this->y);
}

Point2D Point2D::operator+(const Point2D& p)
{
	return Point2D(
		this->x + p.x,
		this->y + p.y);
}

Point2D Point2D::operator-(const Point2D& p)
{
	return Point2D(
		this->x - p.x,
		this->y - p.y);
}
