/*
 * Problem4.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TOTAL_NUMBERS 4

int main() {
	int sum = 0, sumOfSquares = 0, i;
	for (i = 0; i < TOTAL_NUMBERS; i++) {
		printf("Insert the number %d: ", i + 1);
		int num;
		scanf("%d", &num);

		sum += num;
		sumOfSquares += pow(num, 2);
	}
	printf("\nSum is: %d\nSum of squares: %d", sum, sumOfSquares);

	return EXIT_SUCCESS;
}
