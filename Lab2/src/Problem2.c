/*
 ============================================================================
 Name        : Problem1.c
 Author      : Nikitas K.
 Version     :
 Copyright   : MIT License
 Description : Count Evens and odds
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, number, evens = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &number);
		if (number % 2 == 0)
			evens++;
	}

	printf("Evens are: %d\n", evens);
	printf("Odds are: %d", 10 - evens);

	return EXIT_SUCCESS;
}
