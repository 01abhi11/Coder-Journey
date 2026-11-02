#include <stdio.h>

// Function declaration
int fibonacci(int n);

int main() {
    int n = 10; // Number of terms to print

    printf("Fibonacci Series up to %d terms:\n", n);

    // Loop to print each term
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

// Recursive function definition
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
