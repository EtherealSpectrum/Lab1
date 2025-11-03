/*
 * Problem3.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("Insert the base of a triangle: ");
	double base;
	scanf("%lf", &base);

	printf("Insert the height of a triangle: ");
	double height;
	scanf("%lf", &height);

	printf("\n");
	printf("The area of the triangle is: %lf", base * height / 2.0);
	printf("\n");

	printf("Insert the first perpendicular side of the right triangle: ");
	double side1; // Perpendicular sides of a right triangle
	scanf("%lf", &side1);

	printf("Insert the second perpendicular side of the right triangle: ");
	double side2;
	scanf("%lf", &side2);

	printf("\n");
	printf("The hypotenuse is equal to: %f",
			sqrt(pow(side1, 2) + pow(side2, 2)));

	return EXIT_SUCCESS;
}
