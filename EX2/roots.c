#include<stdio.h>
#include<math.h>
void instruct(void);
int  discriminent(int A,int B,int C);
float root1(int A,int B,int DIS);
float root2(int A,int B,int DIS);

int main(void)
{

	//this program is to calculate the roots of a expression in the form of 'ax^2+bx+c'
	//the following function instruct the user about the program
	instruct();

	//the following part is to calculate the roots 
	int a,b,c;
	int Discriminent;
	float Root1,Root2;
	printf("Please enter the value of coefficient a : ");
	scanf("%d",&a);
	printf("Please enter the value of coefficient b : ");
	scanf("%d",&b);
	printf("Please enter the value of coefficient c : ");
	scanf("%d",&c);
        
	//calculates the discrimenent
	Discriminent=discriminent(a,b,c);
        printf("The discriminent is : %d\n",Discriminent);

	//calculates roots
	Root1 =root1(a,b,Discriminent);
	Root2 =root2(a,b,Discriminent);
	printf("your roots of the equation are %f, %f\n",Root1,Root2);
	return 0;
	




}

void instruct(void)
{
	printf("The following program calculates the roots of the expression in the form of ax^2+bx+c\n");
}
int discriminent(int A,int B,int C)
{
	int disc;
	disc=(B*B)-(4*A*C);
	return disc;
}
float root1(int A,int B,int DIS)
{
	float root1;
        root1=((-1*B)+sqrt(DIS))/(2*A);
        
 	return root1;
}
float root2(int A,int B,int DIS)
{
	float root2;
	root2=((-1*B)-sqrt(DIS))/(2*A);
	return root2;
}
