#include <stdio.h>
#include <math.h>

//Function Prototypes
void instruct(void);
int calculate_discriminant(int a, int b, int c);
void calculate_roots(int a, int b, int c, int discriminant, float *root1, float *root2);

//Function to Print Program Description
void instruct(void) 
{
    printf("=== Quadratic Equation Solver ===\n");
    printf("This Program Solves Quadratic Equations of the Form ax^2 + bx + c = 0.\n\n");
}

//Function to Calculate the Discriminant: b^2 - 4ac
int calculate_discriminant(int a, int b, int c) 
{
    return (b*b) - (4*a*c);
}

//Function to Calculate Roots using Output Arguments (Pointers)
void calculate_roots(int a, int b, int c, int discriminant, float *root1, float *root2) 
{
    *root1 = (-b + sqrt(discriminant)) / (2.0f * a); // First Root Formula
    *root2 = (-b - sqrt(discriminant)) / (2.0f * a); // Second Root Formula
}

int main(void)
{
    int a, b, c;
    float root1, root2;

    //Display Program Instructions
    instruct();

    //Get User Input for Coefficients
    printf("Enter Coefficient a:");
    scanf("%d", &a);
    printf("Enter Coefficient b:");
    scanf("%d", &b);
    printf("Enter Coefficient c:");
    scanf("%d", &c);

    //Validate that 'a' is not Zero (not a Valid Quadratic Equation)
    if (a == 0) 
    {
        printf("Error: Coefficient 'a' cannot be Zero in a Quadratic Equation.\n");
        return 1;
    }

    //Calculate Discriminant
    int discriminant = calculate_discriminant(a, b, c);

    //Check if the Roots are Real Numbers
    if (discriminant < 0) 
    {
        printf("The Equation has Complex/Imaginary Roots (Discriminant < 0).\n");
        return 0;
    }

    //Calculate Roots using Pointers
    calculate_roots(a, b, c, discriminant, &root1, &root2);

    //Display the Calculated Roots
    printf("Root 1 = %.3f\n", root1);
    printf("Root 2 = %.3f\n", root2);

    return 0;
}
