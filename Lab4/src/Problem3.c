/*
 ============================================================================
 Name        : Problem3.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5

int main(void) {
	int arr[LENGTH] = { 1, -4, 2, 6, -4 };
	int abs[LENGTH];

	for (int i = 0; i < LENGTH; i++)
		abs[i] = arr[i] > 0 ? arr[i] : -arr[i];

	for (int i = 0; i < LENGTH; i++) {
		printf("%d ", abs[i]);
	}

	return EXIT_SUCCESS;
}
