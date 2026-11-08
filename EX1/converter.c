#include <stdio.h>
#include <math.h>

int deciconverter(int b1,int b2, int b3);
void inst();

int main ()
{
	int bin1,bin2,bin3,ans;
	
	inst();

	printf("Enter first digit:");
	scanf("%d",&bin1);
	printf("Enter second digit:");
	scanf("%d",&bin2);
	printf("Enter third digit:");
	scanf("%d",&bin3);

	if ((bin1 == 0 || bin1 == 1) && (bin2 == 0 || bin2 == 1) && (bin3 == 0 || bin3 ))
	{

        ans = deciconverter(bin1,bin2,bin3);
        printf("Decimal number is %d\n",ans);
        }

	else
	{
                printf("Wrong input");
	}

	return 0;
}

int deciconverter(int b1,int b2, int b3)
{
	float dec;
	dec = b3*(2*2) + b2* 2 + b1 * 1;
	return dec;
}
void inst()
{
	printf("This program will convert the entered binary digits into the decimal number.Please input 1 or 0\n");
}
