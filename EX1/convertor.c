#include <stdio.h>

void  description (void );
int  convertor(int b1, int b2, int b3);

int main (void)
{
	int b1,b2,b3,B;

	printf("Enter the binary number in order (bin1,bin2 and bin3): ");
	scanf("%d %d %d", &b1,&b2,&b3);

        description();
	B = convertor(b1, b2, b3);

	printf("Binary to decimal converstion is %d \n ", B);


	return 0;

}

void  description(void)
{
	printf("Converting binary to decimal\n ");
}

int convertor(int b1, int b2, int b3)
{
	int decimal = b1 * 1 + b2 * 2 + b3 * 4;

	return decimal;

}

