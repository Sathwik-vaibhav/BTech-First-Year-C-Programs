#include <stdio.h>

int main() {
    float length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Safety check to ensure dimensions are positive
    if (length <= 0 || width <= 0) {
        printf("Error: Length and width must be greater than zero.\n");
    } else {
        area = length * width;
        printf("The area of the rectangle (%.3f x %.3f) = %.5f\n", length, width, area);
    }

    return 0;
}
