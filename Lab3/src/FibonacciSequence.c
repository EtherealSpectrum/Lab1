#include <stdio.h>
#include <stdlib.h>

unsigned int Fibonacci(unsigned int);

void FibonacciSequence(unsigned int);

int main() {
    printf("Enter the number of terms: ");

    unsigned int n;
    scanf("%u", &n);

    printf("Fibonacci Sequence:\n");

    FibonacciSequence(n);

    return EXIT_SUCCESS;
}

// 1, 2, 3, 4, 5, 6, 7, 8,  9,  10, 11, 12, 13,  14, ...
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...
unsigned int Fibonacci(unsigned int n){
    if (n < 2) return 0;

    if (n < 3) return 1;

    int fp = 0, fc = 1, fn = fp + fc;
    for(int i = 3; i < n; i++) {
        fp = fc;
        fc = fn;
        fn = fp + fc;
    }
    return fn;
}

void FibonacciSequence(unsigned int n){
    printf("%u", 0);

    if(n > 1) printf(", %u", 1);

    int previous = 0, current = 1, next = previous + current;
    for(int i = 2; i < n; i++) {
        printf(", %u ", next);

        previous = current;
        current = next;
        next = previous + current;
    }
}
