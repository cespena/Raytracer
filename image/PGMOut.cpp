#include "PGMOut.h"

PGMOut::PGMOut()
{}

void PGMOut::save(std::vector<std::vector<int>> image)
{
	std::cout << 255 << '\n';
	for (size_t i = 0; i < image.size(); i++)
	{
		for (size_t j = 0; j < image[i].size(); j++)
			std::cout << image[i][j] << ' ';
		std::cout << std::endl;
	}
}
