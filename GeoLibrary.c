/* Filename: GeoLibrary.c */
#include <stdio.h>
#include <math.h>


void sphere(float radius, float* surface, float* volume){
	
	*surface = ((4 * M_PI) * (radius * radius));
	*volume = ((4/3) * M_PI * (radius * radius));
	return;
}

float volCylinder(float radius, float height){

	float volume = (M_PI * (radius * radius) * height);
	return volume;
}

float sumFloats(float x[], int numFloats){
	
	int i, k, Pt, temp;

	for(i = 0; i < (numFloats - 1); i++){
		Pt = i;
		k = i + 1;
		while(k < numFloats){
			if(x[Pt] > x[k]){
				Pt = k;
			}
			k = k + 1;
		}
		temp = x[i];
		x[i] = x[Pt];
		x[Pt] = temp;
	}

	for(int i = 0; i < numFloats; i++){
		printf("%f ", x[i]);
	printf("\n");
	}
	
	float sum = 0.0;
	for(int i = 0; i < numFloats; i++){
		sum = sum + x[i];
	}

	return sum;
}

double sin(float degrees){
	float x = degrees * M_PI / 180;
	do{
		previousTotal = total;

		term = pow(x, 2 * i - 1) / fact(2 * i - 1);

		if(i % 2 == 0){
			term = -term;
		}
		total += term;
		i++;
	} while(abs(total - previousTotal) > 0.000001);
	return total;
}

double fact(int n){
	double produce = 1;
	int i;
	for(i = 1; i <= n; i++){
		product *= i;
	}
	return product;
}

void printArray(float x[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%f ", x[i]);
	printf("\n");
	}
}
