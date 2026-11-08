#include <stdio.h>
#include <math.h>

int calculateDiscriminant(int A,int B,int C);
void instruct();
void calculateRoots(int A,int B,int C,int disc);

int main (void)
{
	int a,b,c,disc;
	instruct();
	
	scanf("%d,%d,%d",&a,&b,&c);
	disc = calculateDiscriminant(a,b,c);
	calculateRoots(a,b,c,disc);
}

void instruct()
{
	printf("This program solves quadratic equations of the form 𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0 using user given inputs.Please insert the coefficients one by one.\n");
}

int calculateDiscriminant(int A,int B, int C)
{
	return B*B - 4*A*C;
}

void calculateRoots(int A,int B,int C,int disc)
{	
	if(disc<0)
	{
		printf("Discriminant is negative and there are no real roots for negative discriminants.\n");
	}
	else
	{
		float root1;
		float root2;
		root1 = (-B + (sqrt(disc)))/(2*A);
		root2 = (-B - (sqrt(disc)))/(2*A);

		printf("Root 1 is %.3f and root 2 is %.3f\n",root1,root2);
	}
}
