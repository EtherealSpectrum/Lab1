// ΚΑΚΟΥΛΛΗΣ ... Παρασκευής 15:00–17:00 (Τμήμα 6).

// Στο ορολόγιο πρόγραμμα παρακάτω αναγράφεται ως Τμήμα 5 σε αντίθεση με το eClass που αναγράφεται ως Τμήμα 6.
// https://www.dind.uoa.gr/spoydes/orologio_programma_kai_programma_exetaseon

#include <stdio.h>  // To be able to print and scan.
#include <stdlib.h> // To be able to have fancy and descriptive return statements.
#include <stdbool.h> //To be able to use boolean values. Like true 1, false 0.

//This function has one parameter the integer number n and it calculates his sum of digits.
unsigned int digitSum(int); //Declaration of the function.

unsigned int digital_root(int, unsigned int);

//This function calculates the digital root of a number using the digitSum function.
unsigned int digitalRoot(int); //Declaration of the function

int main() {
	//Inform the user.
	printf("Enter a positve number: ");
	int n; // declare n
	while (true) { // @suppress("Symbol is not resolved")
		scanf("%d", &n); //initialize n
		if (n > 0) //if everything is satisfied we can move to the test part.
			break;
		//The above condition is not satisfied so the user entered a negative number.

		//Error messages.
		printf("Invalid number.\n");
		printf("Error Message: Non positive number.\n");

		//Inform the use to try again and this time to enter a positive number.
		printf("Please, try again to enter a positive number: ");
	}

	//Proof that the algorithm is working.
	// The %u is the best way to print an unsigned integer.
	printf("The digital root of the number %d is: %u", n, digital_root(n,10));
}
//Implementation
unsigned int digitSum(int n) {
	if (n < 0) // if a number is negative make it positive.
		n = -n; // assign the opposite value to n, to make it positive.
	unsigned int sum = 0; // the initial sum of the digits is 0.
	while (n > 0) {
		sum += n % 10; // grab the last digit of n and add it in the sum.
		n /= 10; // delete the last digit of the n.
	}
	return sum; //return the sum
}

//Implementation
unsigned int digitalRoot(int n) {
	if (n < 0)
		n = -n;

	//89798  ---> 41 ---> 5
	while (n > 9) //While n is not a single digit number do:
		n = digitSum(n); // assign the digit sum to this number.
	return n;
}

inline unsigned int digital_root(int n, unsigned int base) {
	if (n < 0)
		n = -n;

	return n - (base - 1) * ((n - 1) / (base - 1));
}

