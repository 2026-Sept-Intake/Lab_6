#include <stdio.h>
double calculatearea(double radius);
double calculatecircumference(double radius);
int main(void)
{
	double radius,area,circumference;

	printf("enter the radius :");
	scanf("%lf",&radius);

	area=calculatearea(radius);
	circumference=calculatecircumference(radius);

	printf("area=%.2f\n",area);
	printf("circumference=%.2f\n",circumference);

	return 0;
}

	double calculatearea(double radius)
	{
	return 3.14159*radius*radius;
	}

	double calculatecircumference(double radius)
	{
	return 2*3.14159*radius;
	}


