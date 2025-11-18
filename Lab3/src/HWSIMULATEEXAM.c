/*
 ============================================================================
 Name        : HWSIMULATEEXAM.c
 Author      : Nikitas K.
 Copyright   : MIT License
 Created on  : 7 Νοε 2025
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int numbers[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += numbers[i];
	return sum;
}

void printEvenNumbers(int numbers[], int size) {
	for (int i = 0; i < size; i++)
		if (numbers[i] % 2 == 0)
			printf("%d ", numbers[i]);
}

int main() {
	int N; //Array size
	do {
		printf("Give the size of the array: ");

		scanf("%d", &N);

		if (N <= 0)
			printf("Invalid input!\n");

	} while (N <= 0);

	//Initialize array in the below loop.
	int arr[N];
	for (int i = 0; i < N; i++)
		while (1) {
			printf("Give element %d:", i + 1);

			scanf("%d", &arr[i]);

			if (arr[i] > 0)
				break;

			printf("Invalid input!\n");
		}

	// Calculates the sum.
	int sum = sumNumbers(arr, N);

	//finds Average
	float average = ((float) sum) / N;

	printf("Sum: %.2f\n", (float) sum);
	printf("Average: %.2f\n", average);

	printf("The even numbers of the array are: ");
	printEvenNumbers(arr, N);
	return EXIT_SUCCESS;
}
