#include<stdio.h>
#include<math.h>
void instruct(void);
int bintodec(int bin1,int bin2,int bin3);

int main(void)
{ 
	//this program converts binary to decimal using functions
	//the instructions are displayed using the function
	instruct();
        
	//calculation parts are below
	int bin1,bin2,bin3;
        int dec;
	printf("please enter the first value for bin1 :\n");
	scanf("%d",&bin1);
	printf("please enter the second value for bin2 :\n");
	scanf("%d",&bin2);
	printf("please enter the third value for bin3 :\n");
	scanf("%d",&bin3);
        if( (bin1==0 ||  bin1==1) && (bin2==0 || bin2==1) && (bin3==0 ||bin3==1))
	{
	dec=bintodec(bin1,bin2,bin3);
		printf("the decimal value is : %d\n",dec);
	}
	else{	
        
	printf("the input is invaild\n");
	}
        return 0;
}
void instruct(void)
{
	printf("This program converts binary inputs 0 and 1 into decimal values\n");
}
int bintodec(int bin1,int bin2,int bin3)
{
	int dec;
	dec=bin3*(int)pow(2,2)+bin2*(int)pow(2,1)+bin1*(int)pow(2,0);
	return dec;
}
