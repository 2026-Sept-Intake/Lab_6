#include <stdio.h>
#include <math.h>

double calculateDiscriminant(double a, double b, double c)
{
    return (b * b) - (4 * a * c);
}

void calculateRoots(double a, double b, double c,
                    double discriminant,
                    double *root1, double *root2)
{
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b - sqrt(discriminant)) / (2 * a);
}

int main()
{
    double a, b, c;
    double discriminant;
    double root1, root2;

    printf("Quadratic Equation Solver\n");
    printf("Equation: ax^2 + bx + c = 0\n\n");

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("Error: a cannot be zero.\n");
        return 1;
    }

    discriminant = calculateDiscriminant(a, b, c);

    if (discriminant >= 0)
    {
        calculateRoots(a, b, c, discriminant,
                       &root1, &root2);

        printf("\nRoot 1 = %.3lf\n", root1);
        printf("Root 2 = %.3lf\n", root2);
    }
    else
    {
        printf("\nThe equation has complex roots.\n");
    }

    return 0;
}
