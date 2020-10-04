#ifndef POINT_H
#define POINT_H

#include "Vector.h"

struct Point
{

public:	
	double x;
	double y;
	double z;

	Point();
	Point(double a, double b, double c);
	Point(const Point& p);
	Vector create_vector(Point p);

};

#endif
