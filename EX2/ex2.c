
#include <stdio.h>
#include <math.h>

// Function prototypes
void instruct(void);
double calculateDiscriminant(double a, double b, double c);
void calculateRoots(double a, double b, double c,
                    double discriminant,
                    double *root1, double *root2);

int main(void) {
    double a, b, c, discriminant;
    double root1, root2;

    instruct();

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1;
    }

    discriminant = calculateDiscriminant(a, b, c);

    if (discriminant < 0) {
        printf("No real roots.\n");
    } else {
        calculateRoots(a, b, c, discriminant,
                       &root1, &root2);

        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }

    return 0;
}

void instruct(void) {
    printf("Quadratic Equation Solver\n");
    printf("Solves ax^2 + bx + c = 0\n");
}

double calculateDiscriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

void calculateRoots(double a, double b, double c,
                    double discriminant,
                    double *root1, double *root2) {
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b - sqrt(discriminant)) / (2 * a);
}

