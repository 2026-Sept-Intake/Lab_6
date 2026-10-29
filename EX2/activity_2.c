#include<stdio.h>
#include<math.h>
float calculateDiscriminant(float x,float y,float z);
void calculateRoots(float x,float y,float z);
int main(void)
{
	float a,b,c,Dis;
	printf("enter the value for a:");
	scanf("%f",&a);
	printf("enter the value for b:");
	scanf("%f",&b);
	printf("enter the value for c:");
	scanf("%f",&c);
	Dis = calculateDiscriminant(a,b,c);
	calculateRoots(b,Dis,a);
	printf("\n");
	return 0;
}
float calculateDiscriminant(float x,float y,float z)
{
	return y*y - 4*x*z ;
}
void calculateRoots(float x,float y,float z)
{
        float Root1 = (-x + sqrt(y))/(2*z);
	float Root2 = (-x - sqrt(y))/(2*z);
	printf("The roots are %.3f and %.3f",Root1,Root2);
	
}
