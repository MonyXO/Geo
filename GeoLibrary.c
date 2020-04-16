/* Filename: GeoLibrary.c */
#include <stdio.h>
#include <math.h>

void sphere(float radius, float *surface, float *volume){
	*surface = ((4 * M_PI) * (radius * radius));
	*volume = ((4/3) * M_PI * (radius * radius));
	return;
}

float volCylinder(float radius, float height){
	float volume = (M_PI * (radius * radius) * height);
	return volume;
}
