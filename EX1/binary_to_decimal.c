#include<stdio.h>
void instruct(void);
int decimalconver(int b1,int b2,int b3);//function prototype
int main(void)
{
	int bin1,bin2,bin3,ans;
	instruct();
	scanf("%d %d %d", &bin1, &bin2, &bin3);
	ans = decimalconver(bin1,bin2,bin3);
	printf("%d\n", ans);
	return 0;
}
int decimalconver(int b1,int b2,int b3)
{
	int dec = b3*2*2+b2*2+b1*1;
	return dec;
}
void instruct(void)
{
	printf("input the binary number in 1s or 0s\n");
}
