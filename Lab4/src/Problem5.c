/*
 ============================================================================
 Name        : Problem5.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int arr[10] = { -1, -2, 0, 123, 0, 15, -5, -412, 19, -124 };

	unsigned int negatives = 0, positives = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] < 0)
			negatives++;
		if (arr[i] > 0)
			positives++;
	}

	printf("The negatives are: %u\n", negatives);
	printf("The positives are: %u\n", positives);
	printf("The zero's are: %u",
			sizeof(arr) / sizeof(int) - negatives - positives);
}
