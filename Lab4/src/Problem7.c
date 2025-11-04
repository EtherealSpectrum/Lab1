/*
 ============================================================================
 Name        : Problem7.c
 Author      : Nikitas K.
 Created on	 : 4 Νοε 2025
 Version	 :
 Copyright   : MIT License
 Description :
 ============================================================================
 */

#include <stdio.h>

#define ROWS 2
#define COLLS 3

int main() {
	int a[ROWS][COLLS] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int b[ROWS][COLLS] = { { 1, 5, 4 }, { 3, 4, 1 } };

	int s[ROWS][COLLS];
	int d[ROWS][COLLS];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLLS; j++) {
			s[i][j] = a[i][j] + b[i][j];
			d[i][j] = a[i][j] - b[i][j];
		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLLS; j++) {
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLLS; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
