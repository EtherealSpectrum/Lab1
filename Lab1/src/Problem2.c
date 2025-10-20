/*
 * Problem2.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: nikht
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double radius;
	printf("Insert the radius of a circle: ");
	scanf("%lf", &radius);
	printf("The perimeter of the circle is: %lf\n", 2 * M_PI * radius);
	printf("The area of the circle is: %lf", M_PI * pow(radius, 2));
	return EXIT_SUCCESS;
}
