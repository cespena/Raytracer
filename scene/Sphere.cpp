#include "Sphere.h"

Sphere::Sphere(double x, double y, double z, int rad)
{
	center = Point(x, y, z);
	radius = rad;
}

std::vector<double> Sphere::intersections(Ray ray)
{
	Vector delta = ray.start_camera.create_vector(center);
	double b{(delta * ray.direction) * 2};
	double c{(delta * delta) - (radius * radius)};
	double discriminant{b * b - 4 * c};

	double distance1{ ((b * -1) + sqrt(discriminant)) / 2};
	double distance2{ ((b * -1) - sqrt(discriminant)) / 2};
	
	std::vector<double> result;
	if (distance1 > 0)
		result.push_back(distance1);	
	if (distance2 > 0)
		result.push_back(distance2);
	
	return result;
}
