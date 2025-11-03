/*
 * Problem6.c
 *
 *  Created on: 24 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int gcd(int, int);

int main() {
	printf("Insert 2 numbers separated with space: ");

	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);

	printf("GCD(%d,%d) = %u", m, n, gcd(m, n));

	return EXIT_SUCCESS;
}

/*
 *  return -1 only if it's not defined. GCD(0,0) it's not defined.
 */
unsigned int gcd(int q, int d) {

	if(q == 0 && d == 0) return -1;

	if (q < 0) q = -q;

	if (d < 0) d = -d;

	if (q == 0) return d;

	while (d > 0) {
		unsigned int r = q % d;
		q = d;
		d = r;
	}

	return q;
}
