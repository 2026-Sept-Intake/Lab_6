#include <stdio.h>

void instruct(void);
int convert(int bin1, int bin2, int bin3);

int main(void)
{
	int bin1, bin2, bin3;
	int dec;
	instruct();

	printf("Enter bin1: ");
	scanf("%d", &bin1);

	printf("Enter bin2: ");
        scanf("%d", &bin2);

        printf("Enter bin3: ");
        scanf("%d", &bin3);

        dec = convert(bin1, bin2, bin3);

        printf("Decimal value = %d\n", dec);

        return 0;
}

void instruct(void)
{
	printf("Binary to Decimal Converter\n");
	printf("Enter three binary digits(0 or 1).\n");
}

int convert(int bin1, int bin2, int bin3)
{
	int dec;
	dec = bin3 * 4 + bin2 * 2 + bin1 * 1;

        return dec;
}


