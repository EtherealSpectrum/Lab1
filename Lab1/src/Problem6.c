/*
 * Problem6.c
 *
 *  Created on: 26 Οκτ 2025
 *      Author: Nikitas K.
 */

#include<stdio.h>
#include<stdlib.h>

#define TOTAL_DIGITS 3

int main() {
	printf("Insert an integer number that has exactly %d digits: ",
			TOTAL_DIGITS);

	int sum = 0, i;
	for (i = 0; i < TOTAL_DIGITS; i++)
		sum += getchar() - '0';

	printf("The sum of digits is %d", sum);

	return EXIT_SUCCESS;
}
