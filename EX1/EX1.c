#include <stdio.h>

const double PI =  3.14159;

double Radius()
{
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    return radius;
}

double Area(double radius)
{
    return PI * radius * radius;
}

double Circumference(double radius)
{
    return 2 * PI * radius;
}

int main()
{
    double radius, area, circumference;

    radius = Radius();

    area = Area(radius);
    circumference = Circumference(radius);

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}

