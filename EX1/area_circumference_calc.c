#include <stdio.h>

float calculateArea(float radius);
float calculateCircumference(float radius);

int main()
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculateArea(radius);

    circumference = calculateCircumference(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

float calculateArea(float radius)
{
    float pi = 3.14159;
    return pi * radius * radius;
}

float calculateCircumference(float radius)
{
    float pi = 3.14159;
    return 2 * pi * radius;
}

