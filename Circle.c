#include<stdio.h>
  float calArea(float r);
  float calcircum(float r);
int main(void) 
{	
        float r,a,c;
	
	printf("Enter the Radius:");
	scanf("%f",&r);

        a=3.14 * r * r;
        c=2 * 3.14 * r;

	printf("Area is:%f\n",a);
	printf("circumference is:%f\n",c);
	return 0;
}	



      
