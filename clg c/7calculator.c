#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    int x, y, result;

    // Displaying the menu
    printf("1 : Addition (+)\n");
    printf("2 : Subtraction (-)\n");
    printf("3 : Multiply (*)\n");
    printf("4 : Division (/)\n");
    printf("5 : Modulus (%%)\n");
    printf("6 : Power (^)\n");
    printf("7 : Exit\n");

    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    // Handle exit before asking for numbers
    if (choice == 7) {
        printf("Exiting program...\n");
        return 0;
    }

    // Check for invalid choice before asking for numbers
    if (choice < 1 || choice > 7) {
        printf("Invalid choice! Please run the program again.\n");
        return 0;
    }

    // Get the two numbers
    printf("Enter two integers(e.g, a b): ");
    scanf("%d %d", &x, &y);

    // if-else if ladder for calculations
    if (choice == 1) {
        result = x + y;
        printf("Result: %d + %d = %d\n", x, y, result);
    }
    else if (choice == 2) {
        result = x - y;
        printf("Result: %d - %d = %d\n", x, y, result);
    }
    else if (choice == 3) {
        result = x * y;
        printf("Result: %d * %d = %d\n", x, y, result);
    }
    else if (choice == 4) {
        if (y != 0) {
            printf("Result: %d / %d = %d\n", x, y, x / y);
        } else {
            printf("Error: Division by zero is undefined.\n");
        }
    }
    else if (choice == 5) {
        if (y != 0) {
            result = x % y;
            printf("Result: %d %% %d = %d\n", x, y, result);
        } else {
            printf("Error: Modulo by zero is undefined.\n");
        }
    }
    else if (choice == 6) {
        result = (int)pow(x, y);
        printf("Result: %d ^ %d = %d\n", x, y, result);
    }

    return 0;
}
