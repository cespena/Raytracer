#include <cerrno>
#include <cmath>
#include <cstdlib>
#include <iostream>

#include "tracer/Raytracer.h"
#include "image/PGMOut.h"

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2)
		return -1;

	int resolution = std::stoi(argv[1], nullptr);
	Raytracer tracer;
	PGMOut out;
	out.save(tracer.to_raster(resolution));

	return 0;
}
