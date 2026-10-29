#include <stdio.h>
#include <math.h>

void instruct();
float calculateDiscriminant(int a, int b, int c);
void calculateRoots(int a, int b, int c, float discriminant,float *root1,float *root2);

int main()
{
    int a, b, c;
    float discriminant;
    float root1, root2;

    instruct();

    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = calculateDiscriminant(a, b, c);

    if (discriminant < 0)
    {
        printf("No real roots.\n");
    }
    else
    {
        calculateRoots(a, b, c, discriminant, &root1, &root2);

        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }

    return 0;
}

void instruct()
{
    printf("Solve a quadratic equation of the form ax^2 + bx + c = 0.\n");
}
float calculateDiscriminant(int a, int b, int c)
{
    return (b * b) - (4 * a * c);
}

void calculateRoots(int a, int b, int c, float discriminant, float *root1, float *root2)
{
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b - sqrt(discriminant)) / (2 * a);
}
