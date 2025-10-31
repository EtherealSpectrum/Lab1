/*
 ============================================================================
 Name        : Main.c
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

	double min, max;
	scanf("%lf", &min);
	scanf("%lf", &max);

	double num;
	if (min > max) {
		num = min;
		min = max;
		max = num;
	}

	double average = min + max, difference = -average;
	for (int i = 2; i < TOTAL_USER_INPUTS; i++) {
		scanf("%lf", &num);
		min = num < min ? num : min;
		max = num > max ? num : max;
		average += num;
		difference -= num;
	}
	average /= (double) TOTAL_USER_INPUTS;

	printf("\nMinimum: %f\nMaximum: %f\nAverage: %f\nDifference: %f\n", min,
			max, average, difference);

	return EXIT_SUCCESS;
}
