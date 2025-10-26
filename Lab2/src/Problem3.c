/*
 * Problem3.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	printf("Insert a number: ");

	int num;
	bool isValidNumber = true; // @suppress("Type cannot be resolved") @suppress("Symbol is not resolved")
	do {
		if (!isValidNumber)
			printf("Invalid number, insert again: ");
		scanf("%d", &num);
		isValidNumber = false; //@suppress("Symbol is not resolved")
	} while (num < 2);

	int i;
	for (i = 2; i <= num / 2; i++)
		if (num % i == 0) {
			printf("Not Prime");

			return EXIT_SUCCESS;
		}

	printf("Prime");

	return EXIT_SUCCESS;
}
