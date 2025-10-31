/*
 ============================================================================
 Name        : MainWithArray2.c
 Author      : Nikitas K.
 Version     :
 Copyright   : MIT License
 Description : User Inserts 20 values from user and it finds the minimum value, maximum value, average and difference.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_USER_INPUTS 20

int main(void) {
	printf("Insert %d numbers: ", TOTAL_USER_INPUTS);

	double numbers[TOTAL_USER_INPUTS];
	for (int i = 0; i < TOTAL_USER_INPUTS; i++)
		scanf("%lf", &numbers[i]);

	double min = numbers[0], max = min, average = min, difference = -min;
	for (int i = 1; i < TOTAL_USER_INPUTS; i++) {
		min = numbers[i] < min ? numbers[i] : min;
		max = numbers[i] > max ? numbers[i] : max;
		average += numbers[i];
		difference -= numbers[i];
	}
	average /= (double) TOTAL_USER_INPUTS;

	printf("\nMinimum: %f\nMaximum: %f\nAverage: %f\nDifference: %f\n", min,
			max, average, difference);

	return EXIT_SUCCESS;
}
