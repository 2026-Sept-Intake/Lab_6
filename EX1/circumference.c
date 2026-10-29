#include <stdio.h>
#define PI 3.14

float area(float r);
float circumference(float r);

int main(void){
	float radius =  0;

	printf("Enter the radius: ");
	scanf("%f" , &radius);

	float area_ans  = area(radius);
       	printf("area = %.2f \n",area_ans);

	float circumference_ans = circumference(radius);
	printf("circumference = %.2f \n" ,circumference_ans);
		

	return 0;
}


float area(float r){
	return  PI * r * r;
}

float circumference(float r){
	return 2 * PI * r;
}
