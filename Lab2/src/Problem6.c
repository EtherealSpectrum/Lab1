/*
 * Problem6.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int, int);

int main() {
	printf("Insert two numbers\n");

	printf("Insert first number: ");
	int m;
	scanf("%d", &m);

	printf("Insert second number: ");
	int n;
	scanf("%d", &n);

	printf("GCD(%d,%d) = %d", m, n, gcd(m, n));

	return EXIT_SUCCESS;
}

//int gcd(int q, int d) {
//	if (d == 0)
//		return q;
//	return gcd_recursion(d, q % d);
//}

int gcd(int q, int d) {
	while (d != 0) {
		int r = q % d;
		q = d;
		d = r;
	}
	return q;
}
