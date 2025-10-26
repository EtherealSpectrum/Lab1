/*
 * Problem6.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int gcd(unsigned int, unsigned int);

int main() {
	printf("Insert number the first number: ");
	int m;
	scanf("%d", &m);

	printf("Insert number the second number: ");
	int n;
	scanf("%d", &n);

	printf("GCD(%d,%d) = %u", m, n, gcd(m < 0 ? -m : m, n < 0 ? -n : n));

	return EXIT_SUCCESS;
}

unsigned int gcd(unsigned int q, unsigned int d) {
	while (d != 0) {
		int r = q % d;
		q = d;
		d = r;
	}
	return q;
}
