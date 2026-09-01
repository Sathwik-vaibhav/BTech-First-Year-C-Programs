#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = num1 - num2;
    printf("Subtraction of %.3f and %.3f = %.5f\n", num1, num2, result);

    return 0;
}
