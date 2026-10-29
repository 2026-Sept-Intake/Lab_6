#include<stdio.h>

int binary_to_decimal ( int bin1, int bin2, int bin3){
	int dec;
	dec = bin3 * 4 + bin2 * 2 + bin1 * 1;
	return dec;
}

int main(void)
{
	int bin1,bin2,bin3,dec;
	
	printf("Enter bin1:");
	scanf(" %d ", &bin1);
        printf("Enter bin1:");
        scanf(" %d ", &bin1);
        printf("Enter bin1:");
        scanf(" %d ", &bin1);
if(
	(bin1 !=0 && bin1 !=1) || (bin2 !=0 && bin2 !=1) || (bin3 !=0 && bin3 !=1)
  )

{
     printf("Invalid input enter either 1 or 0");
     return 1;
}
     dec = binary_to_decimal (bin1, bin2, bin3);
     printf("Decimal value :%d ", dec);
 
     return 0;
}
