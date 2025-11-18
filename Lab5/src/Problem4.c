/*
 ============================================================================
 Name        : Problem4.c
 Author      : Nikitas K.
 Created on	 : 16 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>

void commutativity(int *a, int *b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

int main() {
	int a = 3;
	int b = 7;

	printf("Initial a = %d and b = %d\n", a, b);

	commutativity(&a, &b);

	printf("After commutativity a = %d and b = %d", a, b);
}
