/*
 ============================================================================
 Name        : Problem2.c
 Author      : Nikitas K.
 Copyright   : MIT License
 Created on: 3 Νοε 2025
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define INPUTS 5

int parity(double);

int main(void) {
	unsigned int evens = 0;
	for (int i = 0; i < INPUTS; i++) {
		int n;
		scanf("%d", &n);
		if (parity(n) == 0) evens++;
	}

	printf("Evens are %u\nOdds are %u", evens, INPUTS - evens);

	return EXIT_SUCCESS;
}

/*
 * return
 *	-1 only if it's neither even or odd.
 *	0 only if it's even
 *	1 only if it's odd
 */
int parity(double n) {
	if (n != (int) n) return -1;
	return ((int) n) % 2 == 0 ? 0 : 1;
}
