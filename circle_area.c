#include <stdio.h>

// Defining the constant value for Pi
#define PI 3.14159265

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Safety check to ensure radius is positive
    if (radius <= 0) {
        printf("Error: Radius must be greater than zero.\n");
    } else {
        area = PI * radius * radius;
        printf("The area of the circle with radius %.3f = %.5f\n", radius, area);
    }

    return 0;
}
