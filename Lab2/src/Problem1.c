/*
 ============================================================================
 Name        : Problem1.c
 Author      : Nikitas K.
 Version     :
 Copyright   : MIT License
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, number, sum = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &number);
		sum += number;
	}
	printf("Sum is: %d\n", sum);
	printf("Average is: %f", ((double) sum) / 10);

	return EXIT_SUCCESS;
}
