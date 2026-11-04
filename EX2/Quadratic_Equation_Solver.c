#include <stdio.h>
#include <math.h>

void instruct(void);
int discriminent(int A,int B,int C);
float root1(int A,int B,int DIS);
float root2(int A,int B,int DIS);

int main(void)
{
   
    instruct();

    
    int a,b,c;
    int Discriminent;
    float Root1,Root2;
    printf("Please Enter The Value Of Coefficient a : ");
    scanf("%d",&a);
    printf("Please Enter The Value Of Coefficient b : ");
    scanf("%d",&b);
    printf("Please Enter The Value Of Coefficient c : ");
    scanf("%d",&c);

    
    Discriminent=discriminent(a,b,c);
    printf("The Discriminent is : %d\n",Discriminent);

   
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

