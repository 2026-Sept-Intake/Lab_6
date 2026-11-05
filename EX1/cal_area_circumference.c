#include<stdio.h>
 float area(float radius);
 float circumference(float radius);
int main(void)
{
float radius, a, c;
        printf("Enter radius;");
	scanf("%f", &radius);
	a = area(radius);
	printf("area is %f\n", a);
        c = circumference(radius);
        printf("cicumference is %f", c);
	return 0;
}
float area(float radius) {
	float area;
	area = 3.14*radius*radius;
	return area;
}
float circumference(float radius) {
	float circumference;
	circumference = 2*3.14*radius;
	return circumference;
}


