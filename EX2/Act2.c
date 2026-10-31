#include <stdio.h>
#include <math.h>

void instruct();
float calculateDiscriminant(float a, float b, float c);
void calculateRoots(float *root1,float *root2,float a, float b,float c,float discriminant);

int main(void)
{
    float a,b,c,discriminant,Root1,Root2;
    instruct();//runs the instruct() function
    printf("Enter the values for a , b and c:\n");
    scanf("%f %f %f",&a,&b,&c);
    discriminant = calculateDiscriminant( a, b, c);
    
    if (discriminant < 0) 
    {
        printf("The equation has no real roots (discriminant = %.2f).\n", discriminant);
    } 
    else 
    {
        calculateRoots(&Root1, &Root2, a, b, c, discriminant);
        printf("Outputs: %.4g and %.4g\n", Root1, Root2);
    } 
    
    return 0;
}

void instruct()
{
    printf("This programs calculates the roots of quadratic equations:\n");
}

float calculateDiscriminant(float a, float b, float c)
{
    float discriminant = (b * b) - (4*a*c);
    return discriminant;
}

void calculateRoots(float *root1,float *root2,float a, float b,float c,float discriminant)
{
    *root1 = (((-1)*b)+sqrt(discriminant))/(2*a) +0.0f;
    *root2 = (((-1)*b)-sqrt(discriminant))/(2*a) +0.0f;
}
