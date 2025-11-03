/*
 ============================================================================
 Name        : Problem5.c
 Author      : Nikitas K.
 Created on	 : 3 Νοε 2025
 Version	 : 1.0
 Copyright   : MIT License
 Description : Recursive definition of fibonacci sequence.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SDT_DIGITS 9

unsigned int fibonacci(unsigned int N);

int main(void) {
	if(SDT_DIGITS < 1) return EXIT_FAILURE;
	printf("The term %u of Fibonacci sequence is: %u\n", SDT_DIGITS, fibonacci(SDT_DIGITS));
	return EXIT_SUCCESS;
}

unsigned int fibonacci(unsigned int N) {
	if (N < 3) return N > 1 ? 1 : 0;
	return fibonacci(N - 1) + fibonacci(N - 2);
}
