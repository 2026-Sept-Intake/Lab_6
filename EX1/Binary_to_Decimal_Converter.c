#include <stdio.h>
#include <math.h>

int binarytodecimal(int bin1, int bin2, int bin3)
{
        int dec;
        dec = bin3 * pow(2,2) + bin2 * pow(2,1) + bin1 * pow(2,0);

        return dec;
}

int main (void)
{
	int bin1, bin2, bin3, F;

	printf("ENTER BINARY VALUE 01 : ");
	scanf("%d",&bin1);

	printf("ENTER BINARY VALUE 02 : ");
        scanf("%d",&bin2);

	printf("ENTER BINARY VALUE 03: ");
        scanf("%d",&bin3);

	F = binarytodecimal(bin1, bin2, bin3);

	printf("THE DECIMAL VALUE IS: %d\n",F);	
	
	return 0;
}
	
