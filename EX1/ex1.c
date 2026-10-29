#include <stdio.h>

void instruct();
int binaryToDecimal(int bin1, int bin2, int bin3);

int main()
{
    int bin1, bin2, bin3;
    int dec;

    instruct();

    printf("Enter bin1 (0 or 1): ");
    scanf("%d", &bin1);

    printf("Enter bin2 (0 or 1): ");
    scanf("%d", &bin2);

    printf("Enter bin3 (0 or 1): ");
    scanf("%d", &bin3);

    dec = binaryToDecimal(bin1, bin2, bin3);

    printf("Decimal Value = %d\n", dec);

    return 0;
}

void instruct()
{
    printf("Convert a 3-bit binary number to its decimal value.\n");
}

int binaryToDecimal(int bin1, int bin2, int bin3)
{
    return (bin3 * 4) + (bin2 * 2) + (bin1 * 1);
}
