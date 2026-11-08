#include <stdio.h>

float calcarea(float radius);
float calcirc(float radius);

int main (void)
{
        float rad,area,circumference;	
	printf("Enter the radius:");
	scanf("%f",&rad);
	area = calcarea(rad);
	circumference = calcirc(rad);
	printf("Area is %.2f and circumference is %.2f\n",area,circumference);
	return 0;
}

float calcarea(float radius)
{
	return (22.0/7)*radius*radius;
}
float calcirc(float radius)
{
	return 2*(22/7.0)*radius;
}
