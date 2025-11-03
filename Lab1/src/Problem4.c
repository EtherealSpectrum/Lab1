/*
 * Problem4.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
	const unsigned int TOTAL_NUMBERS = 4; // Εναλλακτική είναι να χρησιμοποιήσουμε #define TOTAL_NUMBERS 4 έξω από τη συνάρτηση main.
	int sum = 0, sumOfSquares = 0;
	for (unsigned int i = 0; i < TOTAL_NUMBERS; i++) {
		printf("Insert the number %d: ", i + 1);
		int n;
		scanf("%d", &n);

		sum += n;
		sumOfSquares += n * n;
	}
	printf("\nAverage is: %f\nSum of squares: %d", ((double) sum) / TOTAL_NUMBERS, sumOfSquares);

	return EXIT_SUCCESS;
}
