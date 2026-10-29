#include <stdio.h>
const double pi = 3.14;

float area(float radius);
float circumference(float radius);

int main (void) {
	float area_val , radius , circ_val;

	printf("Input the radius ");
	scanf("%f" , &radius);

	area_val = area(radius);
	printf("Area of the circle :%2f\n",area_val);

	circ_val = circumference(radius);
       printf("Circumference of the circle :%2f\n",circ_val);
}

float area(float radius){
	return 3.14 * radius * radius;
}

float circumference(float radius){
	return 2 * 3.14 * radius;
}








