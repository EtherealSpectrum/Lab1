/*
 * Problem4.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

#define REPEAT 5

unsigned int digits(unsigned int);

int main() {
	int i;
	for (i = 0; i < REPEAT; i++) {
		printf("Insert a number: ");

		unsigned int num;
		scanf("%d", &num);

		char c = num > 9 ? 's' : '\u0000';
		printf("%d has %d digit%c.\n\n", num, digits(num), c);
	}

	return EXIT_SUCCESS;
}

unsigned int digits(unsigned int num) {
	unsigned int total_digits = 1;
	while (num > 9) {
		num /= 10;
		total_digits++;
	}
	return total_digits;
}
