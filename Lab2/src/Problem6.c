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

	if (m < 0) m = -m;
	if (n < 0) n = -n;

	printf("GCD(%d,%d) = %u", m, n, gcd(m, n));

	return EXIT_SUCCESS;
}

/*
 *  return -1 only if it's not defined. GCD(0,0) it's not defined.
 */
unsigned int gcd(unsigned int q, unsigned int d) {
	if(q == 0 && d == 0) return -1
	if (q == 0) return d;
	if (d == 0) return q;

	while (d > 0) {
		unsigned int r = q % d;
		q = d;
		d = r;
	}
	return q;
}
