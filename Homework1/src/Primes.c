// ΚΑΚΟΥΛΛΗΣ 1117202500063 Παρασκευής 15:00–17:00 (στο eClass Τμήμα 6).

// Στο ορολόγιο πρόγραμμα παρακάτω αναγράφεται ως Τμήμα 5 σε αντίθεση με το eClass που αναγράφεται ως Τμήμα 6.
// https://www.dind.uoa.gr/spoydes/orologio_programma_kai_programma_exetaseon

#include <stdio.h> // To be able to print and scan.
#include <stdlib.h> // To be able to have fancy and descriptive return statements.
#include <stdbool.h> // To be able to use boolean values.

#define AT_LEAST_DIGITS 2

//declare the function.
bool isPrime(unsigned int); // @suppress("Type cannot be resolved")

//backup function if I need it for the labs when we modify our code.
//bool isPrimeUniversityVersion(unsigned int n); //@suppress("Type cannot be resolved")

// This function check if a number "n" has at least "least" digits.
//Declaration.
bool has_at_least_digits(int, unsigned int); // @suppress("Type cannot be resolved")

int main(void) {
	//Inform the user to enter how many primes he wants to see.
	printf("Enter total primes with at least 2 digits to see: ");

	int QUANTITY; // Declare the quantity and using screaming snake case convention.
	while (true) { // @suppress("Symbol is not resolved")
		scanf("%d", &QUANTITY); // I assign to quantity the value of the user.

		if (QUANTITY > 0) // If everything is ok we can move forward.
			break;

		//The user suddenly entered a non-positive value.
		//Error message.
		printf("Invalid quantity.\n");
		//Inform the user what caused the error.
		printf("Error Message: Non positive quantity.\n");

		//Tell the user to try again...
		printf("Please, try again to enter a positive quantity: ");
	}

	unsigned int counter = 0, tester = 2; //initialize thoose 2 unsigned ints.
										  // counter will see how many primes did we gather until each iteration.
										  // tester will be the possible prime number or not.

	while (counter < QUANTITY) {  // @suppress("Symbol is not resolved")

		if (isPrime(tester) && has_at_least_digits(tester, AT_LEAST_DIGITS)) { //If tester is prime and has at least 2 digits then,
			printf(counter < QUANTITY - 1 ? "%u, " : "%u", tester); //print the number, usually in the form [number],
																	// the last element doesn't need the comma.

			counter++; //We found a prime so increment by one the counter.

			//Every line will have at most 10 primes.
			if (counter % 10 == 0)
				printf("\n"); //Make a new line for the rest primes.
		}

		tester++; //Let's check the next natural number...
	}

	return EXIT_SUCCESS; //SUCCESS! - Program finished with error code 0 (It's a macro expansion)
}
//Implementation
bool isPrime(unsigned int n) { // @suppress("Type cannot be resolved")
	if (n <= 1)
		return false; // @suppress("Symbol is not resolved")

	if (n <= 3) // 2, 3 are can't be written in the form of: 6k - 1 or 6k + 1
		return true; // @suppress("Symbol is not resolved")

	/*
	 * For all integers x it exists an integer k and it exists a number c member of the set {-1, 0, 1, 2, 3, 4} such that (x = 6k-c).
	 * For all primes x it exists an integer k such that (x = 6k - 1 or x = 6k + 1).
	 */

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false; // @suppress("Symbol is not resolved")

	//Now we know n is not equal with any of these numbers 6k, 6k+2, 6k+3, 6k+4, therefore
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0) // if(6k - 1 | n or 6k + 1 | n) then return false.
			return false; // @suppress("Symbol is not resolved")

	return true; // @suppress("Symbol is not resolved")
}

bool has_at_least_digits(int n, unsigned int least) { // @suppress("Type cannot be resolved")
	if (least <= 1)
		return true; // @suppress("Symbol is not resolved")

	int digits = 1;
	while (n > 9) {
		n /= 10;
		digits++;

		if (digits >= least)
			return true; // @suppress("Symbol is not resolved")
	}

	return false; // @suppress("Symbol is not resolved")
}

//Backup functions just in case if I need them in lab to modify my program...
/*bool isPrimeUniversityVersion(unsigned int n) { // @suppress("Type cannot be resolved")
 if (n <= 1)
 return false; // @suppress("Symbol is not resolved")

 if (n <= 3)
 return true; // @suppress("Symbol is not resolved")

 if (n % 2 == 0)
 return false; // @suppress("Symbol is not resolved")

 for (int i = 3; i * i <= n; i += 2)
 if (n % i == 0)
 return false; // @suppress("Symbol is not resolved")

 return true; // @suppress("Symbol is not resolved")
 }*/

/*bool has_at_most_digits(int n, unsigned int most) {
 return !has_at_least_digits(n, most + 1);
 }*/
