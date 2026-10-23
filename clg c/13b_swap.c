#include <stdio.h>

int main() {
    int a, b;

    // Read values from the user
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable
    a = a + b; // Step 1: a now becomes the sum of both
    b = a - b; // Step 2: b becomes the original value of a
    a = a - b; // Step 3: a becomes the original value of b

    // Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
