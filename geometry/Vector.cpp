#include "Vector.h"

Vector::Vector()
{}

Vector::Vector(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

Vector Vector::operator+(const Vector& v)
{
	double a = x + v.x;
	double b = y + v.y;
	double c = z + v.z;
	
	return Vector(a, b, c);
}

double Vector::operator*(const Vector& v)
{
	double a = x * v.x;
	double b = y * v.y;
	double c = z * v.z;
	
	return a + b + c;
}

Vector Vector::operator*(const double& value)
{
	double a = x * value;
	double b = y * value;
	double c = z * value;
	
	return Vector(a, b, c);
}

double Vector::length()
{
	double a = x * x;
	double b = y * y;
	double c = z * z;

	return sqrt(a + b + c);
}

void Vector::normalize()
{
	double len = length();
	x /= len;
	y /= len;
	z /= len;
}
