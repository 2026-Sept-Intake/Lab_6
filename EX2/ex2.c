#include <stdio.h>
#include <math.h>

void instruct();
double calculateDiscriminant(double a, double b, double c);
void calculateRoots(double a, double b, double c,
                    double discriminant,
                    double *root1, double *root2);

int main()
{
    double a, b, c;
    double discriminant;
    double root1, root2;

    instruct();

    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = calculateDiscriminant(a, b, c);

    if (discriminant < 0)
    {
        printf("No real roots.\n");
    }
    else
    {
        calculateRoots(a, b, c, discriminant, &root1, &root2);

        printf("Root 1 = %.3lf\n", root1);
        printf("Root 2 = %.3lf\n", root2);
    }

    return 0;
}

void instruct()
{
    printf("Solve a quadratic equation of the form ax^2 + bx + c = 0.\n");
}

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
