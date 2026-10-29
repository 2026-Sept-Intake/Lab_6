#include<stdio.h>
float area(float a);
float cir(float b);
int main(void)
{
	float  r,Area,Cir;
	printf("enter the radius of the circle: ");
	scanf("%f",&r);
	Area = area(r);
	Cir = cir(r);
	printf("area of the circle is %.2f and the circumference circle is %.2f\n",Area,Cir);
	return 0;
}
float area(float a)
{
	return (22/7.0)*a*a;
}
float cir(float b)
{
	return 2*(22/7.0)*b;
}

