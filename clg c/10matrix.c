#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], result[10][10];
    int choice;

    // Step 1: Input dimensions
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Step 2: Dimension check
    if (r1 != r2 || c1 != c2) {
        printf("\nError: Dimensions must be identical for Addition/Subtraction in Matrix");
             printf("(%dx%d != %dx%d).\n", r1, c1, r2, c2);
        return 0;
    }

    // Step 3: Input elements of Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 4: Input elements of Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 5: Menu selection
    printf("\n--- Operations Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("\nResult of Matrix Addition:\n");
            break;

        case 2:
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    result[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("\nResult of Matrix Subtraction:\n");
            break;

        default:
            printf("\nInvalid selection!\n");
            return 0;
    }

    // Step 6: Print output
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
