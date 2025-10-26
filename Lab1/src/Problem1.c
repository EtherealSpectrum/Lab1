/*
 * Problem1.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Insert the first number: ");
	int a;
	scanf("%d", &a);

	printf("Insert the second number: ");
	int b;
	scanf("%d", &b);

	printf("\n");

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %f\n", a, b, ((double) a) / b);
	printf("%d div %d = %d\n", a, b, a / b);
	printf("%d mod %d = %d\n", a, b, a % b);

	return EXIT_SUCCESS;
}
