/*
 * Problem2.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: Nikitas K.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("Insert the radius of a circle: ");
	double radius;
	scanf("%lf", &radius);

	printf("The perimeter of the circle is: %f\n", 2 * M_PI * radius);
	printf("The area of the circle is: %f", M_PI * pow(radius, 2));

	return EXIT_SUCCESS;
}
