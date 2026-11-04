#include<stdio.h>
float calarea(float radius);
float calcircumference(float radius);

int main(void)

{
	float radius;
	printf("Enter circle radius : ");
	scanf("%f", &radius);

	float a=calarea(radius);
	float b=calcircumference(radius);

	printf("Area of the circle = %f\n", a);
	printf("Circumference of the circle = %f\n", b);	

	return 0;
}

float calarea(float radius)
{
	float area = (22/7.0)*radius*radius;
	return area;	
}

float calcircumference(float radius)
{
	float circumference = 2 * (22/7.0) * radius;
	return circumference;
}
