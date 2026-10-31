#include <stdio.h>
int calDec(int bin1,int bin2,int bin3);
int main(void)
{
	int bin1,bin2,bin3,ans;
	printf("Enter the Binary values:\n");
	scanf("%d %d %d",&bin1,&bin2,&bin3);
        ans=calDec(bin1,bin2,bin3);
        printf("Decimal Value is %d\n",ans);	
        return 0;
}
void instruction(void)
{
	printf("This program coverts binary inputs (bin1,bin2,bin3) into a decimal value\n");

}	
int calDec(int bin1,int bin2,int bin3)
{
	int dec;
	dec = (bin3*4) + (bin2*2) +(bin1*1);
	return dec;

}	
