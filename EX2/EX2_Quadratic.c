#include <stdio.h>
#include <math.h>

// Function to calculate discriminant
double calculateDiscriminant(double a, double b, double c)
{
    return (b * b) - (4 * a * c);
}

// Function to calculate roots
void calculateRoots(double a, double b, double D,
                    double *root1, double *root2)
{
    *root1 = (-b + sqrt(D)) / (2 * a);
    *root2 = (-b - sqrt(D)) / (2 * a);
}

// Main function
int main()
{
    double a, b, c;
    double D, root1, root2;

    // Instruction
    printf("Quadratic Equation Solver\n");
    printf("Equation: ax^2 + bx + c = 0\n\n");

    // Get coefficients
    printf("Enter coefficient a: ");
    scanf("%lf", &a);

    printf("Enter coefficient b: ");
    scanf("%lf", &b);

    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Check whether it is a quadratic equation
    if (a == 0)
    {
        printf("Error: a cannot be zero.\n");
        return 1;
    }

    // Calculate discriminant
    D = calculateDiscriminant(a, b, c);

    printf("\nDiscriminant = %.3f\n", D);

    // Calculate roots
    if (D > 0)
    {
        calculateRoots(a, b, D, &root1, &root2);

        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }
    else if (D == 0)
    {
        calculateRoots(a, b, D, &root1, &root2);

        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / fabs(2 * a);

        printf("Root 1 = %.3f + %.3fi\n",
               realPart, imaginaryPart);

        printf("Root 2 = %.3f - %.3fi\n",
               realPart, imaginaryPart);
    }

    return 0;
}
