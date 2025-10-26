/*
 * Problem5.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Insert a number: ");

	unsigned int num;
	scanf("%d", &num);

	unsigned int digitSum = 0;
	while (num > 0) {
		digitSum += num % 10;
		num /= 10;
	}

	printf("Digit Sum: %d", digitSum);
}
