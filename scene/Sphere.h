#ifndef SPHERE_H
#define SPHERE_H

#include <vector>
#include "../geometry/Point.h"
#include "../geometry/Vector.h"
#include "../geometry/Ray.h"

class Sphere
{
public:
	Point center;
	int radius;	

	Sphere(double x, double y, double z, int rad);
	std::vector<double> intersections(Ray r);

};

#endif
