#include <stdio.h>
 
int calc(int b1, int b2, int b3);
void instruct(void);

int main(void){
	int bin1,  bin2, bin3 ;
	int decimal;

	instruct();
	printf("Enter the binary 1: ");
	scanf("%d",&bin1);

	printf("Enter the binary 2: ");
        scanf("%d",&bin2);

	printf("Enter the binary 3: ");
        scanf("%d",&bin3);
	
	decimal = calc(bin1 , bin2, bin3);
	printf("Decimal value : %d \n ",decimal );

	return 0 ;
}
void instruct(void){
	printf("This program converts binary into decimals");
	
}

int calc( int b1 , int b2 , int b3){
	return b3 * 2*2  + b2 * 2 + b1;

}
