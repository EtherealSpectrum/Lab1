/*
 * Problem1.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: nikht
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b;

	printf("Insert number a: ");
	scanf("%d", &a);

	printf("Insert number b: ");
	scanf("%d", &b);

	printf("\n");

	printf("(Addition) a + b = %d\n", a + b);
	printf("(Difference) a - b = %d\n", a - b);
	printf("(Product) a * b = %d\n", a * b);
	printf("(Euclidean Division) a / b = %f\n", ((double) a) / b);
	printf("(Integer Division) a div b = %d\n", a / b);
	printf("(Modulo) a mod b = %d\n", a % b);

	return EXIT_SUCCESS;
}
