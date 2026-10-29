#include<stdio.h>
#include<math.h>
void instruct(void);
float calcdiscrim(int a,int b,int c);
void calcroots(int a,int b,int c,float *r1,float *r2,float discrim);

int main (void)
{
	int a,b,c;
	float discrim,r1=0,r2=0;
	instruct(); //calling the instruct function
	scanf("%d %d %d",&a,&b,&c);
	discrim=calcdiscrim(a,b,c); //calling the discriminant calc fucntion
	calcroots(a,b,c,&r1,&r2,discrim); //calling the roots calc function and using referencing to send the r1 and r2 bit addresses
	if (discrim>=0)
	{
		printf("the roots are %.3f & %.3f\n",r1,r2);
	}
	else
	{
		printf("the roots are not real for the quadratic equation u entered\n");
	}
	return 0;
}
void instruct(void) //returning nothing
{
	printf("input the values a , b , c , for a quadratic equation in the form of ax^2+bx+c=0\n");
}

float calcdiscrim(int a,int b,int c)
{
	float discrim=pow(b,2)-4*a*c;
	return discrim;
}
void calcroots(int a,int b,int c,float *r1,float *r2,float discrim)
{
        *r1=(-b+(sqrt(discrim)))/(2.0*a); //using pointers to assign the value to the bit addreess
	*r2=(-b-(sqrt(discrim)))/(2.0*a);
}
