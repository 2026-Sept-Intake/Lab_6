#include<stdio.h>
void instruct(void);
int deciconver(int b1,int b2,int b3);

int main (void)
{
	int bin1,bin2,bin3,ans;
        instruct(); //calling the instruction function
	scanf("%d %d %d",&bin1,&bin2,&bin3);
        ans=deciconver(bin1,bin2,bin3); //calling the convertion function
        printf("%d\n",ans);
	return 0;
}
int deciconver(int b1,int b2,int b3) //converting binary to decimal
{
	int dec=b3*2*2+b2*2+b1*1;
	return dec;
}
void instruct(void) //not returning any value
{
        printf("Input the binary value in 1s or 0s\n");
}
