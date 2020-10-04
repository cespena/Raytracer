#ifndef PGMOUT_H
#define PGMOUT_H

#include <iostream>
#include <vector>

class PGMOut
{
public:
	PGMOut();
	void save(std::vector<std::vector<int>> image);
};

#endif
