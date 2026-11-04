#include <stdio.h>

// Function prototypes
void instruct();
int binaryToDecimal(int bin1, int bin2, int bin3);

int main() 
{
    int bin1, bin2, bin3;

    instruct(); // Display program description

    // Get the three binary inputs from the user
    printf("Enter value for bin1 (0 or 1): ");
    scanf("%d", &bin1);

    printf("Enter value for bin2 (0 or 1): ");
    scanf("%d", &bin2);

    printf("Enter value for bin3 (0 or 1): ");
    scanf("%d", &bin3);

    // Computing the decimal value
    int dec = binaryToDecimal(bin1, bin2, bin3);

    // Print the final output
    printf("Output: %d\n", dec);

    return 0;
}

// Instruct function with a brief description of the program
void instruct() 
{
    printf("=========================================\n");
    printf("Program: 3-bit Binary to Decimal Converter\n");
    printf("Description: This program takes three binary\n");
    printf("             inputs (0 or 1) and computes\n");
    printf("             their corresponding decimal value.\n");
    printf("=========================================\n\n");
}

// Function to compute the decimal value using the given formula
int binaryToDecimal(int bin1, int bin2, int bin3) 
{
    // Formula: dec = bin3 * 2^2 + bin2 * 2^1 + bin1 * 2^0
    return (bin3 * 2*2) + (bin2 * 2) + (bin1 * 1);
 
}
