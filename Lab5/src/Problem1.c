/*
 ============================================================================
 Name        : Problem1.c
 Author      : Nikitas K.
 Created on	 : 14 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>

#define N 10

int main() {
	printf("Give 10 integer numbers separated by space: ");

	int numbers[N];
	int *ptr = numbers;

	for (int i = 0; i < N; i++, ptr++)
		scanf("%d", &*ptr);

	ptr -= N;
	for (int i = 0; i < N; i++, ptr++)
//		printf("%d ", *ptr);
		printf("%d ", &ptr);//TEST
}
