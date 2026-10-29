#include <stdio.h>

void instruct(void);
float decimalcon(int b1, int b2, int b3);

int main(void)
{
	int bin1, bin2, bin3;
	float ans;
	
	instruct();
	printf("Enter binary number one: ");
	scanf("%d", &bin1);
	printf("Enter binary number two: ");
	scanf("%d", &bin2);
	printf("Enter binary number three: ");
	scanf("%d", &bin3);

	if((bin1 == 0 || bin1 == 1) && (bin2 == 0 || bin2 == 1) && (bin3 == 0 || bin3 == 1))
	{
		ans = decimalcon(bin1, bin2, bin3);
		printf("Decimal value: %.2f\n", ans);
	}
	else
		printf("Invalid Values: only 0 and 1 are accepted\n");

	return 0;
}

void instruct(void)
{
	printf("This program takes a binary value and converts it to Decimal.\nPlease enter either 1 or 0 as inputs.\n");
}

float decimalcon(int b1, int b2, int b3)
{
	return b3*4+b2*3+b1;
}
