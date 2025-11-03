/*
 ============================================================================
 Name        : Special.c
 Author      : Nikitas K.
 Version	 : 2.2
 Copyright   : MIT License
 Description : Bρίσκει το μικρότερο αριθμό, το μεγαλύτερο αριθμό, το μέσο όρο και τη διαφορά (μάλλον τον αντίθετο αθροίσματος) 20 —αριθμητικών— εισόδων.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define INPUTS 20

int main(void) {
	printf("Insert %d numbers: ", INPUTS);

	double sum;
	scanf("%lf", &sum);

	double min = sum, max = sum;
	for (int i = 1; i < INPUTS; i++) {
		double num;
		scanf("%lf", &num);

		sum += num;
		if (num < min) min = num;
		if (num > max) max = num;
	}

	printf("\nMinimum: %f\nMaximum: %f\nAverage: %f\nDifference: %f\n", min, max, sum / INPUTS, -sum);

	return EXIT_SUCCESS;
}
