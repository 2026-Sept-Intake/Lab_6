#include<stdio.h>
#include<math.h>
#define PI 3.14

float ar(float r);
float br(float b);

int main(void)
{
	float a;
	float area;
	float cir;

	printf("Enter the radious:");
	scanf("%f", &a);

	area = ar(a);
	cir = br(a);

	printf("Area:%.2f\n", area);
	printf("Circumference:%.2f\n", cir);
return 0;
}

float ar(float r)
{
	return PI * r * r;
}

float br(float b)
{
	return 2.0 * PI * b;
}
