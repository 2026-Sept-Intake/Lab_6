#include<stdio.h>
float calArea(float r);
float calCircum(float r);

int main (void)
{
	float r;
	printf ("Enter the radius:");
	scanf("%f", &r);

	float a = calArea(r);
	float b = calCircum(r);

	printf("area of the circle: %.2f\n",a);
	printf("circum of the circle: %.2f\n",b);

	return 0;

}

float calArea(float r){
	float area = 3.14*r*r;

	return area;	
}
float calCircum(float r)
{
	float circum = 2*3.14*r;

	return circum;

}

