#include<stdio.h>

float callarea(float radius);

float callcircumference(float radius);

int main(void){
	float Area,radius,circumference;

	printf("Input the radius : ");
	scanf("%f", &radius);

	Area = callarea(radius);
	printf("Area of the circle :%2f\n",Area);
	
        circumference  = callcircumference(radius);
	printf("Circumference of the circle :%2f\n",circumference);
}

float callarea(float radius){
	return 3.14 * radius * radius;
}
float callcircumference(float radius){
	return 2 * 3.14 * radius;
}


