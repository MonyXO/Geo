/* Filename: GeoDriver.c */
#include "GeoLibrary.h"
#include <stdio.h>

void main(){
	float* answer = 0;
	float* volume = 0;

	sphere(17.583, *answer, *volume);
	float result = volCylinder(13.35, 3.71);

	printf("Surface Area: %f", *answer);
	printf("\nVolume: %f", *volume);
	printf("\nVolume of the Cylinder: %f\n", result);
}
