#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the parallelogram: ");
    scanf("%f", &base);

    printf("Enter the perpendicular height: ");
    scanf("%f", &height);

    // Safety check to ensure dimensions are positive
    if (base <= 0 || height <= 0) {
        printf("Error: Base and height must be greater than zero.\n");
    } else {
        area = base * height;
        printf("The area of the parallelogram (base %.3f x height %.3f) = %.5f\n", base, height, area);
    }

    return 0;
}
