/*
 * Problem5.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: nikht
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int gcdEuclid(int, int);

int main() {
	int m, n;
	printf("Insert two numbers\n");

	printf("Insert first number: ");
	scanf("%d", &m);

	printf("Insert second number: ");
	scanf("%d", &n);

	printf("The greatest common divisor of the two numbers is: %d", gcdEuclid(m,n));
}

int gcdEuclid(int m, int n) {
	int r;

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
