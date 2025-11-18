/*
 ============================================================================
 Name        : Problem2.c
 Author      : Nikitas K.
 Created on	 : 14 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>

#define SIZE 5

int main() {
	int arr1[SIZE] = { 123, 21, 125, 13254, -214 };
	int *ptr1 = arr1;

	int arr2[SIZE] = { 41, -213, 124, 111, 1023 };
	int *ptr2 = arr2;

	for (int i = 0; i < SIZE; i++, ptr1++, ptr2++) {
		*ptr1 = *ptr2;
		printf("%d ", *ptr1);
	}
	return 0;
}
