/*
 ============================================================================
 Name        : Problem4.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */
#include <stdio.h>

#define INPUTS 10

int main(void) {
	int arr[INPUTS];

	printf("Enter %u non-negative numbers: ", INPUTS);
	for (int i = 0; i < INPUTS; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 0) {
			printf("Invalid number\n");
			printf("Error Message: Negative number\n");
			printf("Please, try again and enter a non-negative number: ");
			i--;
		}
	}

	int min = arr[0], max = min;
	for (int i = 1; i < INPUTS; i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	printf("The minimum is: %d\n", min);
	printf("The maximum is: %d", max);
}
