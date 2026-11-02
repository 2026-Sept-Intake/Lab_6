#include <stdio.h>

int bi2dec(int bin1,int bin2,int bin3);
int main(void)
{
	int bin1, bin2, bin3;
	int dec;

	printf("Enter three binary digits(ex:1 0 1):");
	scanf("%d %d %d", &bin1,&bin2,&bin3);
	if((bin1 != 1 && bin1 != 0) ||
    	   (bin2 != 1 && bin2 != 0) ||
	   (bin3 != 1 && bin3 != 0))
	{
		printf("Invail Binary number!\n");
	} else {
		dec = bi2dec(bin1, bin2, bin3);
		printf("The decimal value is %d\n", dec);
	}
	return 0;
}
		
int bi2dec (int bin1, int bin2, int bin3)
{
	int dec;
	dec = bin1 * 1 + bin2 * 2 + bin3 * 4;
	return dec;
}

