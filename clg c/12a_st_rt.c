#include <stdio.h>

int main() {
    int n, i, j;

    // Read the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for printing stars in each row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row is complete
        printf("\n");
    }

    return 0;
}
