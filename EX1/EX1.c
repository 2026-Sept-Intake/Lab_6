#include<stdio.h>
#include<math.h>

int BinaryToDecimalSum(int bin1,int bin2,int bin3)

{
	int dec;
	dec = bin3*pow(2,2) +bin2*pow(2,1)+bin1*pow(2,0);
	return dec;



}
int main()
{
	int bin1,bin2,bin3,Q;
	printf("Enter the first binary value:");
	scanf("%d", &bin1);
	printf("Enter the second binary value:");
        scanf("%d", &bin2);
	printf("Enter the third binary value:");
        scanf("%d", &bin3);

	Q = BinaryToDecimalSum(bin1,bin2,bin3);

	printf("Sum of the decimal values of these binary values: %d\n",Q);

	return 0;
        
	
	
	
	
	
}



	
