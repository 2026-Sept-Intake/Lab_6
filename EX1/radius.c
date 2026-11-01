#include<stdio.h>
#include<math.h>
float area(float r);
float circumference(float a);
int main (void)
{
	float rad;
	float a;
	float circ;
	printf("please enter the value of radius : ");
	scanf("%f",&rad);
        a=area(rad );
	circ=circumference(rad);
        printf("The area is : %f\n",a);
	printf("The circumfernece is : %f\n",circ);
	
return 0;        
}
float area(float r)
{
	return r*r*3.14;
}
float circumference(float a)
{
	return 2*3.14*a;
}

