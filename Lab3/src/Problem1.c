/*
 ============================================================================
 Name        : Problem1.c
 Author      : Nikitas K.
 Copyright   : MIT License
 Created on: 3 Νοε 2025
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INPUTS 10

bool is_non_positive_or_greater_than_9(int); // @suppress("Type cannot be resolved")

int main(void) {
	unsigned int counter = 0;
	for (int i = 0; i < INPUTS; i++) {
		int n;
		scanf("%d", &n);
		if (is_non_positive_or_greater_than_9(n)) counter++;
	}

	printf("Total numbers less than 1 or greater than 9 is %u", counter);

	return EXIT_SUCCESS;
}

bool is_non_positive_or_greater_than_9(int n) { // @suppress("Type cannot be resolved")
	return n < 1 || n > 9;
}
