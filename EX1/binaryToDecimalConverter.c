#include <stdio.h>

void instruct(void);
int convertToDecimal(int bin1, int bin2, int bin3);

int main(void)
{
    int bin1, bin2, bin3;
    int decimalValue;

    instruct();

    printf("Enter three binary bits (0 or 1):\n");
    printf("Enter bin1: ");
    scanf("%d", &bin1);
    printf("Enter bin2: ");
    scanf("%d", &bin2);
    printf("Enter bin3: ");
    scanf("%d", &bin3);

    decimalValue = convertToDecimal(bin1, bin2, bin3);

    printf("Output: %d\n", decimalValue);

    return 0;
}

void instruct(void)
{
    printf("=================================================================================\n");
    printf("||                            Binary to Decimal Converter                      ||\n");
    printf("=================================================================================\n");
    printf("This program converts a 3-bit binary number into its corresponding decimal value\n");
    printf("================================================================================\n\n");
}

int convertToDecimal(int bin1, int bin2, int bin3)
{
    int dec;
    dec = (bin3 * 4) + (bin2 * 2) + (bin1 * 1);
    return dec;
}

