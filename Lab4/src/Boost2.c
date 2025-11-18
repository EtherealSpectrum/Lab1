/*
 ============================================================================
 Name        : Boost2.c
 Author      : Nikitas K.
 Created on	 : 14 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */
#include <stdio.h>

void printDivisors(int num);

int main() {
	int x;
	printf("Give positive x: ");
	do
		scanf("%d", &x);
	while (x <= 0);
	printDivisors(x);
	return 0;
}

void printDivisors(int num) {
	int total_divisors = 0;
	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			total_divisors++;

	int divisors[total_divisors];
	for (int i = 1, j = 0; i <= num; i++)
		if (num % i == 0) {
			divisors[j] = i;
			j++;
		}

	printf("The divisors of the number %d are:\n", num);
	for (int i = 0; i < total_divisors;) {
		printf("%d ", divisors[i]);
		if (++i % 4 == 0)
			printf("\n");
	}
	printf("\n\n");
	unsigned int evens = 0, odds = 0;
	for (int i = 0; i < total_divisors; i++) {
		if (divisors[i] % 2 == 0)
			evens++;
		else
			odds++;
	}

	printf("The even numbers are: %u\n", evens);
	printf("The odd numbers are: %u", odds);
}
