/*
 * Problem4.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: nikht
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int num1, num2, num3, num4;
	printf("Input the first number: ");
	scanf("%d", &num1);

	printf("Input the second number: ");
	scanf("%d", &num2);

	printf("Input the third number: ");
	scanf("%d", &num3);

	printf("Input the fourth number: ");
	scanf("%d", &num4);

	printf("The average is: %f\n", (num1 + num2 + num3 + num4) / 4.0);
	printf("The sum of squares is: %d",
			(int) pow(num1, 2) + (int) pow(num2, 2) + (int) pow(num3, 2)
					+ (int) pow(num4, 2));

	return EXIT_SUCCESS;
}
