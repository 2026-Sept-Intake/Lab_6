#include <stdio.h>
#include <math.h>

int bin2dec(int bin1, int bin2, int bin3)
{ 
	return bin3*pow(2,2) + bin2*pow(2,1) + bin1*pow(2,0);
}

int main(void)
{
	int b1, b2, b3;

	printf("Enter b1 b2 b3:");
	scanf("%d%d%d", &b1, &b2, &b3);

	printf("Decimal value: %d", bin2dec(b1,b2,b3));

	return 0;
}


