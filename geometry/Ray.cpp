#include "Ray.h"

Ray::Ray(double a, double b, double c)
{
	start_camera.x = a;
	start_camera.y = b;
	start_camera.z = c;
}

Ray::Ray(const Point& p)
{
	start_camera.x = p.x;
	start_camera.y = p.y;
	start_camera.z = p.z;
}

void Ray::set_direction(Vector v)
{
	direction.x = v.x;
	direction.y = v.y;
	direction.z = v.z;
	direction.normalize();
}
