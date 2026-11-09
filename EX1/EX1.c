#include<stdio.h>
int binary_to_decimal(int bin1,int bin2,int bin3)
{
   int dec;
   dec= bin3*4 + bin2* 2 +bin1*1;
   return dec;
}
int main(void)
{
	int bin1,bin2,bin3,dec;
        printf("enter bin1: ");
	scanf("%d", &bin1);
        printf("enter bin2: ");
        scanf("%d", &bin2);
	printf("enter bin3: ");
        scanf("%d", &bin3);

	if((bin1 !=0 && bin1 !=1)||(bin1 !=0 && bin1 !=1)||(bin1 !=0 && bin1 !=1))
	{
	 printf("invalid input enter either 1 or 0.\n");
	 return 1;
	}

	dec =binary_to_decimal(bin1,bin2,bin3);
	printf("decimal value is: %d",dec);

	return 0;
}
                                                                                                                                                         
                                                           
