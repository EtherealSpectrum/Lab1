/*
 * Problem3.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: nikht
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void newLine(int);

int main() {
	double base, height;
	printf("Insert the base of a triangle: ");
	scanf("%lf", &base);

	printf("Insert the height of a triangle: ");
	scanf("%lf", &height);

	printf("The area of the triangle is: %lf", base * height / 2.0);

	newLine(3);

	double side1, side2; // Perpendicular sides of a right triangle
	printf("Insert the first perpedicular side of the right triangle: ");
	scanf("%lf", &side1);

	printf("Insert the second perpedicular side of the right triangle: ");
	scanf("%lf", &side2);

	printf("The hypotenuse is equal to: %lf",
			sqrt(pow(side1, 2) + pow(side2, 2)));

	return EXIT_SUCCESS;
}

void newLine(int repeat) {
	int i = 0;
	for (i = 0; i < repeat; i++) {
		printf("\n");
	}
}
