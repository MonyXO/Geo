/* Filename: GeoDriver.c */
#include "GeoLibrary.h"
#include <stdio.h>

void main(){

	// Ask for radius of Sphere
	float radius;
	float userAnswer = 0.0;
	float userVolume = 0.0;
	printf("Enter the radius of the sphere: ");
	scanf("%f", &radius);
	sphere(radius, &userAnswer, &userVolume);
	printf("\nSurface Area: %f", userAnswer);
	
	// Old Code that needs re-writing
	printf("\nOld code starts here: ");
	int numFloats = 5;
	float arr[] = {15, 6, 12, 3, 5};

	float result = volCylinder(13.35, 3.71);

	printf("\nVolume: %f", userVolume);
	printf("\nVolume of the Cylinder: %f\n", result);
	printf("\n");
	printArray(arr, numFloats);
	printf("\n");
	float sum = sumFloats(arr, numFloats);
	printf("The sum of all elements: %f", sum);
}


