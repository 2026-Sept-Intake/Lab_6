#include<stdio.h>
float area(int a);
float circum(int a);

int main (void)
{
	int r; //radius as r
	float ans1,ans2;
	printf("input the radius\n");
	scanf("%d",&r);
	ans1=area(r); //calling the first function
	ans2=circum(r); //calling the 2nd function
	printf("area is %.2f\ncircumference is %.2f\n",ans1,ans2);
        return 0;
}

float area(int a)
{
	return (22/7.0)*(a*a); //returning the value to the main function
}

float circum(int a)
{
	return 2*(22/7.0)*a;
}
