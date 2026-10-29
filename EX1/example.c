#include <stdio.h>

float funcarea(float radius);
float funccirc(float radius);

int main(void)
{
	float rad, area, circ;

	printf("Enter radius: ");
	scanf("%f", &rad);

	area = funcarea(rad);
	circ = funccirc(rad);

	printf("Area: %.2f\n", area);
	printf("Circumference: %.2f\n", circ);
	return 0;
}

float funcarea(float radius)
{
	return (22/7.0)*radius*radius;
}

float funccirc(float radius)
{
	return (22/7.0)*2*radius;
}




