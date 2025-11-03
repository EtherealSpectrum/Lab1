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
	for (int i = 0; i < REPEAT; i++) {
		printf("Insert a number: ");
		int num;
		scanf("%d", &num);
		printf(i < REPEAT - 1 ? "%d has %u digit%c.\n\n" : "%d has %u digit%c.", num, digits(num < 0 ? -num : num), num > 9 ? 's' : '\u0000');
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
