#include<stdio.h>
#include<math.h>
/*function prototypes'functiontype,functionname,parameter*/
void instruct(void);
double calculatediscriminant(double a, double b, double c);
void calculateroots(double a,double b,double c, double discriment,double*root1, double*root2);

int main(void)
{
	double a, b, c;
	double discriminant, root1, root2;
	instruct();

	printf("enter coefficient a:");
	scanf("%lf", &a);
	printf("enter coefficient b:");
	scanf("%lf", &b);
	printf("enter coefficient c:");
	scanf("%lf", &c);
	if (a == 0) {
		printf("error: a cannot be 0\n");
		return 1;
	}
        discriminant = calculatediscriminant(a, b, c);
	if (discriminant < 0) {
		printf("the equation has no real roots(discriminant = %.3f).\n", discriminant);
		return 0;
	}
	calculateroots(a, b, c, discriminant, &root1, &root2);
	printf("roots:%.3f and %.3f\n", root1, root2);
	return 0;
}
void instruct(void)
{
	printf("this programsolves quadratic equation of the form\n");
	printf("ax^2 + bx + c = 0 using the quadratic formula.\n");
	printf("enter the coefficient a, b and c when prommpted.\n");
}
double calculatediscriminant(double a, double b, double c)
{
       	return b * b - 4 * a * c;
}
void calculateroots(double a, double b, double c, double discriminant, double * root1, double * root2)
{
	*root1 = (-b + sqrt(discriminant)) / (2 * a);
	*root2 = (-b - sqrt(discriminant)) / (2 * a);
	if (*root1 == 0) *root1 = 0;
	if (*root2 == 0) *root2 = 0;
}

