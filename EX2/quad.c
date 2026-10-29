#include <stdio.h>
#include <math.h>

void instruct(void);
int calculateDiscriminant(int a, int b, int c);
void calculateRoots(int a, int b, int c, int dis);

int main(void)
{	
	int a, b, c, ansDisc;

	instruct();
	printf("Enter coefficient a: ");
	scanf("%d", &a);
	printf("Enter coefficient b: ");
	scanf("%d", &b);
	printf("Enter coefficient c: ");
	scanf("%d", &c);

	ansDisc = calculateDiscriminant(a, b, c);
	calculateRoots(a, b, c, ansDisc);
	return 0;
}

void instruct(void)
{
	printf("This program solves quadratic equations of the form ax^2+bx+c=0.\n");
}

int calculateDiscriminant(int a, int b, int c)
{
	return b*b-4*a*c;
}

void calculateRoots(int a, int b, int c, int dis)
{
	float r1, r2;
	r1 = ((-b + sqrt(dis))/(2*a));
	r2 = ((-b - sqrt(dis))/(2*a));

	printf("Roots: %.3f, %.3f\n", r1, r2);
}	
