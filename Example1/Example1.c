#include <stdio.h>

float calculateArea(float radius);
float calculateCircumference(float radius); 

int main(void)
{
	float radius, area, circumference;

	printf("Enter radius: ");
	scanf("%f", &radius);

        area = calculateArea(radius);
	circumference = calculateCircumference(radius);

        printf("Area is = %f", area);
	printf("Circumference = %.2f\n", circumference);

	return 0;
}

float calculateArea(float radius)       	
{
    float area;

    area = 3.14159 * radius * radius;
    
    return area;
}

float calculateCircumference(float radius) 
{
    float circumference;

    circumference = 2 * 3.14159 * radius;

    return circumference;
}
