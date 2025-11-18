/*
 ============================================================================
 Name        : Problem2.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define INPUTS 10

int main(void) {
	double arr[INPUTS];

	printf("Enter 7 numbers: ");

	double sum = 0;
	for (int i = 0; i < INPUTS; i++)
		scanf("%lf", &arr[i]);

	for (int i = 0; i < INPUTS; i++)
		sum += arr[i] * arr[i];

	printf("Sum of squares of the array elements is: %f", sum);

	return EXIT_SUCCESS;
}
