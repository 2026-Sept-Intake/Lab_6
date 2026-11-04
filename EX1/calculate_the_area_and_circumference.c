#include <stdio.h>
float Area(float r);
float Circumference(float c);
int main (void)
{
	float rad,are,crcum;

	printf("ENTER THE RADIUS OF CIRCLE : ");
	scanf("%f",&rad);

	are = Area(rad);
	crcum = Circumference(rad);

	printf("THE AREA OF CIRCLE : %fcm^2\n",are);
	printf("THE CIRCUMFERENCE OF CRICLE : %fcm\n",crcum);

	return 0;
}

float Area(float r)
{
	float are;
	are = 22.0/7.0*r*r;
	return are;
}

float Circumference(float c)
{
	float crcum;
	crcum = 2.0*22.0/7.0*c;
	return crcum;
}


