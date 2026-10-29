#include<stdio.h>

float calArea(float r);

int main(void)
{
	float radius;
	float a;
	
	printf("Enter the radius value:");
	scanf("%f",&radius);

	a= calArea(radius);
	printf("Area is %f",a);
	return 0;

}

float calArea(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}

