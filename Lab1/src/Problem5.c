/*
 * Problem5.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include<stdio.h>
#include<stdlib.h>

#define TOTAL_DIGITS 3

int main() {
	printf("Insert an integer number that has exactly %d digits: ", TOTAL_DIGITS);
	int num;
	scanf("%d", &num);

	int sum = 0, i;
	for (i = 0; i < TOTAL_DIGITS; i++) {
		sum += num % 10;
		num /= 10;
	}

	printf("The sum of digits is %d", sum);
	return EXIT_SUCCESS;
}
