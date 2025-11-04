/*
 ============================================================================
 Name        : Problem1.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LENGTH 7

int main(void) {
	int arr[LENGTH];

	int i = 0;
	bool isArrayInitialized = false; // @suppress("Type cannot be resolved") // @suppress("Symbol is not resolved")
	while (!isArrayInitialized || i >= 0) {

		if (!isArrayInitialized) {
			arr[i] = i - 1;
			isArrayInitialized = i == LENGTH - 1;
		}

		if (isArrayInitialized)
			printf("%d ", arr[i]);

		i = isArrayInitialized ? i - 1 : i + 1;
	}
	return EXIT_SUCCESS;
}
