/*
 ============================================================================
 Name        : Boost.c
 Author      : Nikitas K.
 Created on	 : 14 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findMax(int numbers[], int size);
int findMin(int numbers[], int size);

int main() {
	int N;
	do {
		printf("Give N: ");
		scanf("%d", &N);
	} while (N <= 0);

	int arr[N];
	printf("Give %d numbers separated by space here: ", N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	float average = 0;
	for (int i = 0; i < N; i++)
		average += arr[i];

	average /= N;

	printf("\nAverage is: %f\n\n", average); //Temporary

	for (int i = 0; i < N; i++)
		if (arr[i] > average)
			printf("%d ", arr[i]);

	return EXIT_SUCCESS;
}

int findMax(int numbers[], int size) {
	int max = numbers[0];
	for (int i = 1; i < size; i++)
		if (numbers[i] > max)
			max = numbers[i];
	return max;
}

int findMin(int numbers[], int size) {
	int min = numbers[0];
	for (int i = 1; i < size; i++)
		if (numbers[i] < min)
			min = numbers[i];
	return min;
}
