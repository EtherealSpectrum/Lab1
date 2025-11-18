/*
 ============================================================================
 Name        : Problem3.c
 Author      : Nikitas K.
 Created on	 : 14 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include<stdio.h>

#define INPUTS 10

int main() {
	int arr[INPUTS];

	printf("Insert %u numbers: ", INPUTS);

	int *max = arr;

	for (size_t i = 0; i < INPUTS; i++) {
		int *curr = arr + i;

		scanf("%d", curr);

		if (*curr > *max)
			max = curr;
	}

	printf("max(array) = arr[%d] = %d", max - arr, *max);

	return 0;
}
