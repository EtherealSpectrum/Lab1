/*
 ============================================================================
 Name        : Problem1.c
 Author      : Nikitas K.
 Version     :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TOTAL_INPUTS 3

int main(void) {

	int number, sum = 0;
	double average = 0;

	for (int i = 0; i < TOTAL_INPUTS; i++) {
		printf("Insert a number: ");
		scanf("%d", &number);
		average += number;

		if (number > 0)
			sum += number;
	}

	average /= (double) TOTAL_INPUTS;

	printf("The sum of the positive numbers is: %d\n", sum);
	printf("Average is: %f", average);

	return EXIT_SUCCESS;
}
