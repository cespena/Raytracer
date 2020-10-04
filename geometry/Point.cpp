#include "Point.h"

Point::Point()
{}

Point::Point(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;
	z = p.z; 
}

Vector Point::create_vector(Point p)
{
	double newX = x - p.x;
	double newY = y - p.y;
	double newZ = z - p.z;

	return Vector(newX, newY, newZ);
}
