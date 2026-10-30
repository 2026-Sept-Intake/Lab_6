#include <stdio.h>

float calculateArea(float r);
float calculateCircumference(float r);

int main()
{

	float r;
	float a;
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);

	a = calculateArea(r);

	printf("Area is %f", a);
	return 0;
}
float calculateArea(float r)
{
	float area;
	area = 3.14 * r * r;
	return area;
}
       
