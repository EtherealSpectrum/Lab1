/*
 ============================================================================
 Name        : Problem6.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

bool isEven(int); // @suppress("Type cannot be resolved")

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	unsigned int evens = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (isEven(arr[i]))
			evens++;

	printf("The above array has %u evens.\n", evens);
	printf("The above array has %u odds.", sizeof(arr) / sizeof(int) - evens);
}

bool isEven(int n) { // @suppress("Type cannot be resolved")
	return n % 2 == 0;
}
