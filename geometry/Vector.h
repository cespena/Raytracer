#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

struct Vector
{
	double x;
	double y;
	double z;

	Vector();
	Vector(double a, double b, double c);
	Vector operator+(const Vector& v);
	Vector operator*(const double& value);
	double operator*(const Vector& v);
	double length();
	void normalize();
};

#endif
