#include <stdio.h>

float areacalc (float r);
float cirmcalc (float r);

int main (void)
{
	float radius,a,b;
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	a = areacalc(radius);
	printf("Area is %f\n", a);

	b= cirmcalc(radius);
	printf("Circumference is %f\n", b);

        return 0;

}

float areacalc (float radius)
{ 
	float area;
	area = 3.14 * radius*radius;

	return area;

}


float cirmcalc (float radius)
{
	float circumference;
	circumference = 2 * 3.14 * radius;
	

	return circumference;


} 


