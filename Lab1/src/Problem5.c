/*
 * Problem5.c
 *
 *  Created on: 18 Οκτ 2025
 *      Author: nikht
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	printf("Insert an integer number that has exactly 3 digits: ");
//	int num;
//	scanf("%d", &num);

	int i;
	int sum = 0;
	for (i = 0; i < 3; i++) {
		sum += getchar() - '0';
//		sum += num % 10;
//		num /= 10;
	}

	printf("The sum of digits is %d", sum);
	return EXIT_SUCCESS;
}
