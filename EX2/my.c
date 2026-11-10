#include <stdio.h>
#include <math.h>

float calculate_Discriminant(int a, int b, int c)
{
	return pow(b,2) - 4 * a * c;
}

void  calculate_Roots(int a, int b, int c, float d, float *root1, float *root2)
{
	 d = calculate_Discriminant(a, b, c);

	*root1 = (-b + sqrt(d)) / (2.0 * a);
	*root2 = (-b - sqrt(d)) / (2.0 * a);
}

int main(void)
{
	int a, b, c;
	float d, root1, root2;

	printf("Enter the a b c: ");
	scanf("%d%d%d" , &a, &b, &c);

	calculate_Roots(a, b, c, d, &root1, &root2);

	printf(" %f\n" , root1);
	printf(" %f\n" , root2);

	return 0;
}
