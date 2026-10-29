#include <stdio.h>

float calculateArea(float radius) {
    return 3.14159 * radius * radius;
}

float calculateCircumference(float radius) {
    return 2 * 3.14159 * radius;
}

int main() {
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = calculateArea(radius);
    circumference = calculateCircumference(radius);

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
