/*
 * Problem3.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: nikht
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	unsigned int num;
	printf("Insert a number: ");
	bool validNumber = true; // @suppress("Type cannot be resolved") // @suppress("Symbol is not resolved")
	do {
		if (!validNumber)
			printf("Invalid number, insert again: ");
		scanf("%d", &num);
		validNumber = false; // @suppress("Symbol is not resolved")
	} while (num < 2);

	int i;
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			printf("Not Prime");
			return EXIT_SUCCESS;
		}
	}
	printf("Prime");
	return EXIT_SUCCESS;
}
