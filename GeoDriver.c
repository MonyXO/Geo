/* Filename: GeoDriver.c */
#include "GeoLibrary.h"
#include <stdio.h>

void main(){

	int numFloats = 5;
	float userAnswer = 0.0;
	float userVolume = 0.0;
	float arr[] = {15, 6, 12, 3, 5};

	sphere(17.583, &userAnswer, &userVolume);
	float result = volCylinder(13.35, 3.71);
	double sinR = sin(45);

	printf("Surface Area: %f", userAnswer);
	printf("\nVolume: %f", userVolume);
	printf("\nVolume of the Cylinder: %f\n", result);
	printf("\n");
	printArray(arr, numFloats);
	printf("\n");
	float sum = sumFloats(arr, numFloats);
	printf("The sum of all elements: %f", sum);
	printf("\nAngle: %f\n", sinR);
}


