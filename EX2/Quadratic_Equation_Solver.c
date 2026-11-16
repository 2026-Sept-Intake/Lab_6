#include <stdio.h>
#include <math.h>

void instruct(void);
double calculateDiscriminant(double a, double b, double c);
void calculateRoots(double a, double b, double c, double discriminant, double *root1, double *root2);

int main()
{
    double a, b, c;
    double discriminant;
    double r1, r2;

    instruct();

    printf("Enter coefficient a: ");
    if (scanf("%lf", &a) != 1) return 1;
    
    printf("Enter coefficient b: ");
    if (scanf("%lf", &b) != 1) return 1;
    
    printf("Enter coefficient c: ");
    if (scanf("%lf", &c) != 1) return 1;

    if (a == 0)
    {
        printf("Error: 'a' cannot be 0 in a quadratic equation.\n");
        return 1;
    }

    discriminant = calculateDiscriminant(a, b, c);

    if (discriminant >= 0)
    {
        calculateRoots(a, b, c, discriminant, &r1, &r2);
        printf("Outputs: %.3f and %.3f\n", r1, r2);
    }
    else
    {
        printf("The equation has complex/imaginary roots.\n");
    }

    return 0;
}

void instruct(void)
{
    printf("===================================================\n");
    printf("             Quadratic Equation Solver            \n");
    printf(" This program calculates the real roots of a       \n");
    printf(" quadratic equation in the form: ax^2 + bx + c = 0 \n");
    printf("===================================================\n\n");
}

double calculateDiscriminant(double a, double b, double c)
{
    return (b * b) - (4 * a * c);
}


void calculateRoots(double a, double b, double c, double discriminant, double *root1, double *root2) {
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b - sqrt(discriminant)) / (2 * a);
}

