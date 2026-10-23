#include <stdio.h>

int main() {
    int n, i, j, k;

    // Read the number of rows (height) from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop 1: Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Inner loop 2: Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
