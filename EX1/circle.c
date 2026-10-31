#include <stdio.h>
float calArea(float r);
float calCir(float r);
int main(void)
{
	float radius,ans1,ans2,c;//c is circumference
	
	printf("Enter the Radius:");
	scanf("%f",&radius);
	ans1=calArea(radius);
	printf("Area is %f\n",ans1);
	ans2=calCir(radius);
	printf("Circumference is %f\n",ans2);
        return 0;
}

float calArea(float r)
{
	float area;
	area= (22.0/7.0)*r*r;
	return area;



}
float calCir(float r)
{
	float circumference;
	circumference = 2*(22.0/7.0)*r;
        return circumference;
}	
