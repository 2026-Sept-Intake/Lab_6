# include <stdio.h>

float area(float radius);

float circumference(float radius);

int main(void)
{
	float radius,a,c;
	printf("input the radius of the circle");
	scanf("%f",&radius);
        a=area(radius);
	printf("area of the circle=%.2f\n",a); 
	c=circumference(radius);
	printf("circumference of the circle=%.2f\n",c);

        return 0;
}


      float area(float radius)
{
        return 3.14*radius*radius;
}

      float circumference(float radius)\
{
          return 2*3.14*radius;
}
