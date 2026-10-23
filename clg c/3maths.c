#include <stdio.h>
int main () {
    int x, y, sum, subt, mul, mod;
    float div;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);
    sum = x + y;
    subt = x - y;
    mul = x * y;
    mod = x % y;
    div = (float) x/y;
    printf("Sum = %d\n", sum);
    printf("Subtract = %d\n", subt);
    printf("Multiply = %d\n", mul);
    printf("Modulus = %d\n", mod);
    printf("Division = %.2f\n", div);

    return 0;
}

