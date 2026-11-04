#include<stdio.h>
#include<math.h>

int bintodec(int bin1, int bin2, int bin3);

int main(void)

{
	int bin1, bin2, bin3;

	printf("bin1 = ");
	scanf("%d", &bin1);

	printf("bin2 = ");
	scanf("%d", &bin2);

	printf("bin3 = ");
	scanf("%d", &bin3);
	
	if((bin1==1||bin1==0)&&(bin2==1||bin2==0)&&(bin3==1||bin3==0))
		{
			int a = bintodec(bin1, bin2, bin3);
			printf("Decimal value of the (%d%d%d) = %d\n", bin1, bin2, bin3, a);
		}
	else
	{
		printf("Invalid binary number\n");
	}
	return 0;
}

int bintodec(int bin1, int bin2, int bin3)
{
	int dec = bin3*pow(2,2) + bin2*pow(2,1) + bin1*pow(2,0);

	return dec;
}
