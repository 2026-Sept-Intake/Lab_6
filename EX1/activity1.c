#include<stdio.h>

void instruct(void);
int getBit(void);
int toDecimal(int bin1, int bin2, int bin3);

int main(void){
	int bin1, bin2, bin3, dec;

	instruct();

	printf("Enter bin1: ");
	bin1 = getBit();
	printf("Enter bin2: ");
        bin2 = getBit();
	printf("Enter bin3: ");
        bin3 = getBit();

	dec = toDecimal(bin1, bin2, bin3);

	printf("Decimal value: %d\n", dec);
	return 0;
}
void instruct(void){
	printf("Binary to Decimal Converter\n");
	printf("Enter three binary digits (0 or 1) \n");
	printf("The program prints the decimal value \n\n");
}

int getBit(void){
	int value;
	scanf("%d", &value);
	while (value != 0 && value != 1){
		printf("Invalid. Enter 0 or 1: ");
		scanf("%d", &value);
	}
	return value;
}
int toDecimal(int bin1, int bin2, int bin3){
	return bin3 * 4 + bin2 * 2 + bin1 * 1;
}

