#include <stdio.h>

int main() {
    int mat[2][3], trans[3][2];

    // Step 1: Input elements for 2x3 matrix
    printf("Enter elements of 2x3 matrix (total 6 elements):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Step 2: Compute transpose
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    // Step 3: Print original 2x3 matrix
    printf("\nOriginal Matrix (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Step 4: Print transpose 3x2 matrix
    printf("\nTranspose Matrix (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
