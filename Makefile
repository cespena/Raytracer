CXXFLAGS = -g -pedantic -Wall -Wextra -std=c++17
LDFLAGS = -g

SRCS_CPP = main.cpp geometry/Point.cpp geometry/Vector.cpp geometry/Ray.cpp scene/Sphere.cpp image/PGMOut.cpp tracer/Raytracer.cpp
OBJS = $(SRCS_CPP:.cpp=.o)

.PHONY: all
all: a.out

a.out: $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

$(OBJS): geometry/Point.h geometry/Vector.h geometry/Ray.h scene/Sphere.h image/PGMOut.h tracer/Raytracer.h

.PHONY: clean 
clean:
	rm -f *.o geometry/*.o scene/*.o image/*.o tracer/*.o a.out
