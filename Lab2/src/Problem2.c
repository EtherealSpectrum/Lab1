/*
 * Problem2.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_INPUTS 10

int main() {
	int number, evens = 0, i;
	for (i = 0; i < TOTAL_INPUTS; i++) {
		printf("Insert a number: ");
		scanf("%d", &number);
		evens = number % 2 == 0 ? evens + 1 : evens;
	}
	printf("Evens are: %d\nOdds are: %d", evens, TOTAL_INPUTS - evens);
	return EXIT_SUCCESS;
}
