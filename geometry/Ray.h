#ifndef RAY_H
#define RAY_H

#include "Point.h"
#include "Vector.h"

class Ray
{
public:
	Point start_camera;
	Vector direction;
	
	Ray(double a, double b, double c);
	Ray(const Point& p);
	void set_direction(Vector v);
};

#endif
