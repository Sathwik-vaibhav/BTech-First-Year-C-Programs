#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Safety check to ensure the side length is positive
    if (side <= 0) {
        printf("Error: Side length must be greater than zero.\n");
    } else {
        area = side * side;
        printf("The area of the square with side %.3f = %.5f\n", side, area);
    }

    return 0;
}
