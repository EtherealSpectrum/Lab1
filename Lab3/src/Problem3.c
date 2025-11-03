/*
 ============================================================================
 Name        : Problem3.c
 Author      : Nikitas K.
 Copyright   : MIT License
 Created on: 3 Νοε 2025
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define NUMBER 51235

unsigned int digitSum(unsigned int);

int main(void) {
	printf("The number %d has %u", NUMBER, digitSum(NUMBER));
	return EXIT_SUCCESS;
}

unsigned int digitSum(unsigned int n) {
	unsigned int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
