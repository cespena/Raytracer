#ifndef RAYTRACER_H
#define RAYTRACER_H

#include <iostream>

#include "../geometry/Point.h"
#include "../geometry/Vector.h"
#include "../geometry/Ray.h"
#include "../scene/Sphere.h"

class Raytracer
{

public:
	std::vector<std::vector<int>> to_raster(int resolution);
};

#endif 
