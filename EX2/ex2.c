#include <stdio.h>
#include <math.h>

void instruct(void);
double CalculateDiscriminant(double a,double b,double c);
void CalculateRoots(double a,double b,double c,double disc,double*root1,double*root2);

int main(void)
{
	double a,b,c,disc,root1,root2;
	instruct();

	printf("enter a,b,c: ");
	scanf("%lf" "%lf" "%lf",&a,&b,&c);

	disc=CalculateDiscriminant(a,b,c);

	if(disc<0)
	{
	printf("no real roots.\n");
	return 0;
	}

	CalculateRoots(a,b,c,disc,&root1,&root2);
	printf("roots:%.3f and %.3f\n",root1,root2);
	return 0;
}

void instruct(void)
{
printf("this problem solves ax^2+bx+c=0.\n");
}

double CalculateDiscriminant(double a,double b,double c)
{
return b*b-4*a*c;
}

void CalculateRoots(double a,double b,double c,double disc,double*root1,double*root2)
{
double negB=0-b;
*root1=(negB+sqrt(disc))/(2*a);
*root2=(negB-sqrt(disc))/(2*a);
}

