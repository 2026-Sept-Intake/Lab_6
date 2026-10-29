#include<stdio.h>
int dec(int a,int b,int c);
int main(void)
{
	int bin1,bin2,bin3,Dec;
	printf("enter the bin1: only 1 or 0 ");
	scanf("%d",&bin1);
	printf("enter the bin2: only 1 or 0 ");
	scanf("%d",&bin2);
	printf("enter the bin3: only 1 or 0 ");
	scanf("%d",&bin3);
        Dec = dec(bin1,bin2,bin3);
        printf("decimal number : %d\n",Dec);
	return 0;
}
int dec(int a,int b,int c)
{
	return c*2*2 + b*2 + a*1;
}
