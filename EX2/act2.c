#include <stdio.h>
#include <math.h>

void instruct(void);
int calculateDiscriminat(int a, int b, int c);
void calculateRoots(int a, int b int c, int discriminat);

int main (void){
	instruct ();
	int a,b,c;

	printf("Enter the value of a :");
	scanf("%d",&a);

	printf("Enter the value of b :");
	scanf("%d",&b);

	printf("Enter the value of c :");
	scanf ("%d", &c);

	int discr = calculateDiscriminat (a, b, c);
	calculateRoots(a, b, c,discr);

	return 0;
}

void insruct (void){
	printf("This problem solves quadratic equations of the form ax^2 + bx + c = 0.\n");
	printf("Enter the cofficients a, b , and c to find the roots.\n");

}

int calculateDoscriminat (int a, int b, int c){
	return b*b - 4 * a * c;
}

void calculateRoots(int a, int b, int c, int discrminat, float root1, float root2){
	root1 = (-b + sqrt(discriminat)) / (2.0 * a);
	root2 = (-b + sqrt(discriminat)) / (2.0 * a);
}
