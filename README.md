# Raytracer_First_Attempt
CS 103 Spring 2020

This is a first attempt at a raytracer. Ray tracing is a rendering techique to generate photorealistic images by tracing the path of light as pixels in an image plane and simulating the effects of its encounters with virtual objects.

In this first attempt:
  - The camera is stationary
  - Only spheres appear in the raster
  - The output is in PGM file format, making the image a grayscale image.
  
The Makefile that has been provided will compile the program. Once compile a executable called a.out will be created.

In order to run the program in a command line, the program must be called along with an integer value representing the resolution of the image. For example:

  ./a.out 128
  
Will output an image with a 128x128 resolution.

In order to view the image, save the output of the program into a file with the extension .pgm. This can be done using redirection:

  ./a.out 128 > output.pgm

Once the output file has been created, open the file with an image viewer. 
