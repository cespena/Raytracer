#include "Raytracer.h"

std::vector<std::vector<int>> Raytracer::to_raster(int resolution)
{
	std::cout << "P2\n";
	std::cout << resolution << ' ' << resolution << '\n';

	double viewport_scale_factor{resolution == 1 ? 1: 2. /resolution};
	double viewport_shift{1 - 1. / resolution};
	Ray ray(0, 0, 5);
	Sphere sphere(0, 0, -5, 1);
	
	std::vector<std::vector<int>> image;
	
	for (int y_pixel = 0; y_pixel < resolution; ++y_pixel)
	{
		double viewport_y_coordinate{y_pixel * viewport_scale_factor - viewport_shift};
		std::vector<int> newRow;
		for (int x_pixel = 0; x_pixel < resolution; ++x_pixel)
		{
			double viewport_x_coordinate{x_pixel * viewport_scale_factor - viewport_shift};
			
			Vector ray_direction = Point(viewport_x_coordinate, 
										viewport_y_coordinate, 0)
										.create_vector(ray.start_camera);
			ray.set_direction(ray_direction);
			std::vector<double> distances = sphere.intersections(ray);

			double brightness = 0;
			int pixel_brightness = 0;
			if (distances.size() == 2)
			{
				if (distances[0] < distances[1])
					brightness = 10 - distances[0];
				else
					brightness = 10 - distances[1];
			}
			else if (distances.size() == 1)
				brightness = 10 - distances[0];

			if (brightness < 0)
				brightness = 0;
			pixel_brightness = static_cast<int>(brightness * 255);
			newRow.push_back(pixel_brightness);
		}
		image.push_back(newRow);
	}

	return image;
}
