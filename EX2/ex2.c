#include <stdio.h>
#include <math.h>

/* Function prototypes */
void instruct(void);
double calculateDiscriminant(double a, double b, double c);
void calculateRoots(double a, double b, double c, double discriminant,
                    double *root1, double *root2);

int main(void) {
    double a, b, c;
    double discriminant, root1, root2;

    /* Step 1: show the program description */
    instruct();

    /* Step 2: get the coefficients from the user */
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    /* a cannot be 0 in a quadratic equation */
    if (a == 0) {
        printf("Invalid input! 'a' cannot be 0 in a quadratic equation.\n");
        return 1;
    }

    /* Step 3: calculate the discriminant */
    discriminant = calculateDiscriminant(a, b, c);
    printf("Discriminant = %.2f\n", discriminant);

    /* Step 4: calculate and display the roots */
    if (discriminant < 0) {
        printf("The equation has no real roots.\n");
    } else if (discriminant == 0) {
        calculateRoots(a, b, c, discriminant, &root1, &root2);
        printf("The equation has one repeated root: x = %.2f\n", root1);
    } else {
        calculateRoots(a, b, c, discriminant, &root1, &root2);
        printf("The equation has two real roots:\n");
        printf("x1 = %.2f\n", root1);
        printf("x2 = %.2f\n", root2);
    }

    return 0;
}

/* Displays a brief description of the program */
void instruct(void) {
    printf("-----------------------------------------------\n");
    printf("Quadratic Equation Solver\n");
    printf("This program solves equations of the form\n");
    printf("ax^2 + bx + c = 0 and prints the roots.\n");
    printf("-----------------------------------------------\n");
}

/* Returns the discriminant: b^2 - 4ac */
double calculateDiscriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

/* Calculates the two roots and returns them through root1 and root2 */
void calculateRoots(double a, double b, double c, double discriminant,
                    double *root1, double *root2) {
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b - sqrt(discriminant)) / (2 * a);
}
