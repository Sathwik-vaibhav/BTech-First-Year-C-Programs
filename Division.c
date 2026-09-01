#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Safety check to prevent division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Division of %.3f and %.3f = %.5f\n", num1, num2, result);
    }

    return 0;
}
