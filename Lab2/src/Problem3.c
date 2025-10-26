/*
 * Problem3.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Insert an integer number greater or equal than 2: ");

	unsigned int num;
	while (1 == 1) {
		scanf("%d", &num);
		if (num > 1)
			break;

		printf("\n (Invalid number) Insert again a new number that meets the conditions: ");
	}

	for (int i = 2; i <= num / 2; i++)
		if (num % i == 0) {
			printf("Not Prime");

			return EXIT_SUCCESS;
		}

	printf("Prime");

	return EXIT_SUCCESS;
}
