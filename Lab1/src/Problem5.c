/*
 * Problem5.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("Insert an integer number that has exactly 3 digits: ");
	int num;
	scanf("%d", &num);

	int sum = 0, i;
	for (i = 0; i < 3; i++) {
		sum += num % 10;
		num /= 10;
	}

	printf("The sum of digits is %d", sum);
	return EXIT_SUCCESS;
}

