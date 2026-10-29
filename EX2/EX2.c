#include <stdio.h>
#include <math.h>

void instruct();
float calculateDiscriminant(int a, int b, int c);
void calculateRoots(int a, int b, int c, float dis);

int main()
{
    int a, b, c;
    float dis;

    instruct();

    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    dis = calculateDiscriminant(a, b, c);

    calculateRoots(a, b, c, dis);

    return 0;
}

void instruct()
{
    printf("This program solves quadratic equations.\n");
}

float calculateDiscriminant(int a, int b, int c)
{
    return b * b - 4 * a * c;
}

void calculateRoots(int a, int b, int c, float dis)
{
    float r1, r2;

    r1 = (-b + sqrt(dis)) / (2 * a);
    r2 = (-b - sqrt(dis)) / (2 * a);

    printf("Root 1: %.2f\n", r1);
    printf("Root 2: %.2f\n", r2);
}

