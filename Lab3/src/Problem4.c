/*
 ============================================================================
 Name        : Problem4.c
 Author      : Nikitas K.
 Copyright   : MIT License
 Created on  : 3 Νοε 2025
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SDT 202500063

unsigned int calculate(int);

unsigned int fibonacci(unsigned int);

int main(void) {
	if (calculate(SDT) < 1)
		return EXIT_FAILURE;
	printf("The term %u of Fibonacci sequence is: %u\n", calculate(SDT),
			fibonacci(calculate(SDT)));

	return EXIT_SUCCESS;
}

unsigned int fibonacci(unsigned int N) {
	if (N < 3)
		return N > 1 ? 1 : 0; // if (N <= 2) return N == 2 ? 1 : 0;

	unsigned int current = 1;
	{
		unsigned int previous = 0;
		for (unsigned int i = 2; i < N; i++) {
			current += previous;
			previous = current - previous;
		}
	}

	return current;
}

unsigned int calculate(int id) {
	return (id % 10) + (id % 100) / 10;
}
