#include <stdio.h>
#include <math.h>

void instruct(void);
int calculateDiscriminant(int a , int b , int c );
void calculateRoots(int a, int b , int c, int discriminant);

int main(void){
	instruct();
	int a, b,c;

	printf("Enter the value of a: ");
	scanf("%d",&a);

	printf("Enter the value of b: ");
        scanf("%d",&b);

	printf("Enter the value of c: ");
        scanf("%d",&c);

	int discr = calculateDiscriminant(a , b, c);
	calculateRoots(a,b,c,discr);				

	return 0;
}

void instruct(void){
	printf("This program will help you to solve a quadratic equation \n");
	printf("------------------------------------------------ \n");
	printf("The form should be in ax^2+bx+c=0\n");
	printf("Enter the values of a , b and c \n");
}

int calculateDiscriminant(int a , int b , int c ){
	return  b * b - 4 * a * c;
}

void calculateRoots(int a, int b , int c, int discriminant){
	float root1 = (-b + sqrt(discriminant)) / (2.0 * a);
	printf("root1 : %.3f \n",root1);
    	float root2 = (-b - sqrt(discriminant)) / (2.0 * a);
	printf("root2 : %.3f \n", root2);
}

