#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	unsigned int num;
	int i;
	for (i = 0; i < 5; i++) {
		printf("Insert a number: ");
		scanf("%d", &num);
		unsigned int digit_sum = 0;
		do {
			digit_sum += num % 10;
			num /= 10;
		} while (num != 0);
		printf("Digit Sum: %d", digit_sum);
	printf("\n");
	}
}
