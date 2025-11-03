/*
 * Problem1.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_INPUTS 3

int main() {
	int number, sumOfPositives = 0, sumOfNegatives = 0, i;
	for (i = 0; i < TOTAL_INPUTS; i++) {
		printf("Insert a number: ");
		scanf("%d", &number);

		if (number > 0)
			sumOfPositives += number;
		else
			sumOfNegatives += number;
	}
	printf("The sum of positives is: %d\nThe average of all inputs is: %f", sumOfPositives, (sumOfPositives + sumOfNegatives) / (double) TOTAL_INPUTS);

	return EXIT_SUCCESS;
}
