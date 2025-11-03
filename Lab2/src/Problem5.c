/*
 * Problem5.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int digitSum(unsigned int n);

int main() {
	printf("Insert a number: ");
	int n;
	scanf("%d", &n);
	printf("Digit Sum: %u", digitSum(n < 0 ? -n : n));
}

unsigned int digitSum(unsigned int n) {
	unsigned int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
