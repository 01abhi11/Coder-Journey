#include <stdio.h>

int main() {
    int a, b, temp;

    // Read values from the user
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using temp variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
