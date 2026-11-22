#include <stdio.h>
#include <math.h>

void instruct();

float calculateDiscriminant(float a, float b, float c);

void calculateRoots(float a, float b, float c, float d, float *root1, float *root2);

int main()
{
    float a, b, c, d;
    float root1, root2;

    instruct();

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = calculateDiscriminant(a, b, c);

    if (d >= 0)
    {
        calculateRoots(a, b, c, d, &root1, &root2);

        printf("\nFirst root = %.3f\n", root1);
        printf("Second root = %.3f\n", root2);
    }
    else
    {
        printf("The equation has no real roots.\n");
    }

    return 0;
}

void instruct()
{
    printf(" Quadratic Equation Solver!\n");
    
}

float calculateDiscriminant(float a, float b, float c)
{
    float d;

    d = (b * b) - (4 * a * c);

    return d;
}

void calculateRoots(float a, float b, float c, float d,
                    float *root1, float *root2)
{
    *root1 = (-b + sqrt(d)) / (2 * a);
    *root2 = (-b - sqrt(d)) / (2 * a);
}

