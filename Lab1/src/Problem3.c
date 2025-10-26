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
	for (int i = 0; i < 2; i++) {
		double base, height;

		printf(i == 0 ? "Insert the base of a triangle: " : "Insert the first perpendicular side of the right triangle: ");
		scanf("%lf", &base);

		printf(i == 0 ? "Insert the height of a triangle: " : "Insert the second perpendicular side of the right triangle: ");
		scanf("%lf", &height);

		printf(i == 0? "\nThe area of the triangle is: %f\n\n":"\nThe hypotenuse is equal to: %f", i == 0? base * height / 2.0: sqrt(pow(base, 2) + pow(height, 2)));
	}

	return EXIT_SUCCESS;
}
