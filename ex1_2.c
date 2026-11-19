#include <stdio.h>
void instruct(void);
int computeDecimal(int bin1,int bin2,int bin3);

int main(void)
{
	int bin1,bin2,bin3,decimal;
	instruct();

	printf("enter bin1 -  0 or 1 :");
	scanf("%d",&bin1);
	printf("enter bin2 -  0 or 1 :");
	scanf("%d",&bin2);
	printf("enter bin3 -  0 or 1 :");
	scanf("%d",&bin3);
	decimal=computeDecimal(bin1,bin2,bin3);
	printf("decimal value=%d\n",decimal);
	return 0;
}

	void instruct(void)
	{
	printf("this program converts a 3bit binary number to decimal.\n");
	printf("enter 0 or 1 for each bit.\n");
	}

	int computeDecimal(int bin1,int bin2,int bin3)
	{
	return bin3*4+bin2*2+bin1*1; 
	}






