#include <stdio.h>
#include <math.h> // Required for sqrt()

// Function prototypes
void instruct();
float calculateDiscriminant(float a, float b, float c);
void calculateRoots(float a, float b, float c, float discriminant);

int main() 
{
    float a, b, c;

    // Display program description
    instruct();

    // Getting coefficients from the user
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);

    printf("Enter the coefficient of x: ");
    scanf("%f", &b);

    printf("Enter the constant term: ");
    scanf("%f", &c);

    // Calculating discriminant
    float discriminant = calculateDiscriminant(a, b, c);

    // Calculate and print roots
    calculateRoots(a, b, c, discriminant);

    return 0;
}

// Instruct function with a brief description of the program
void instruct() {
    printf("==================================================\n");
    printf("Program: Quadratic Equation Solver\n");
    printf("Description: Solves equations of the form ax^2 + bx + c = 0\n");
    printf("==================================================\n\n");
}

// Calculate and return the discriminant
float calculateDiscriminant(float a, float b, float c) 
{
    return (b * b - 4 * a * c);
}

// Calculate and print roots directly
void calculateRoots(float a, float b, float c, float discriminant)
{
    float root1, root2;
    
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    
    printf("Roots are: %.3f and %.3f\n", root1, root2);
}
