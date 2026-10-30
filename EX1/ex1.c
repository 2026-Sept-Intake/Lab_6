#include <stdio.h>

/* Function prototypes */
void instruct(void);
int binary_to_decimal(int bin1, int bin2, int bin3);

int main(void) {
    int bin1, bin2, bin3, dec;

    /* Step 1: show the program description */
    instruct();

    /* Step 2: get the inputs from the user */
    printf("Enter bin3 (0 or 1): ");
    scanf("%d", &bin3);
    printf("Enter bin2 (0 or 1): ");
    scanf("%d", &bin2);
    printf("Enter bin1 (0 or 1): ");
    scanf("%d", &bin1);

    /* Check that every input is either 0 or 1 */
    if ((bin1 != 0 && bin1 != 1) ||
        (bin2 != 0 && bin2 != 1) ||
        (bin3 != 0 && bin3 != 1)) {
        printf("Invalid input! Each value must be either 0 or 1.\n");
        return 1;
    }

    /* Step 3: compute and display the decimal value */
    dec = binary_to_decimal(bin1, bin2, bin3);
    printf("The binary number %d%d%d is %d in decimal.\n", bin3, bin2, bin1, dec);

    return 0;
}

/* Displays a brief description of the program */
void instruct(void) {
    printf("-----------------------------------------------\n");
    printf("Binary to Decimal Converter\n");
    printf("This program takes three binary digits (0 or 1)\n");
    printf("and prints the corresponding decimal value.\n");
    printf("-----------------------------------------------\n");
}

/* Converts a 3-bit binary number to decimal */
int binary_to_decimal(int bin1, int bin2, int bin3) {
    int dec;
    dec = bin3 * 4 + bin2 * 2 + bin1 * 1;   /* 2^2, 2^1, 2^0 */
    return dec;
}
