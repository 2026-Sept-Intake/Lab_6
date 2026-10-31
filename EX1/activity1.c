#include <stdio.h>
#include <math.h>

//Function Prototypes
void instruct(void);
int convert_to_decimal(int bin1, int bin2, int bin3);

// Function to Print Program Description
void instruct(void)
{
    printf("=== Binary to Decimal Converter ===\n");
    printf("This Program Converts 3 Binary Inputs (0 or 1) into a Decimal Number.\n\n");
}

//Function to Calculate and Return the Corresponding Decimal Value
int convert_to_decimal(int bin1, int bin2, int bin3)
{
        return bin3*4 + bin2*2 + bin1;
}

int main(void)
{
        //Declare Variables to Store the Three Binary Inputs
	int bin1, bin2, bin3;
        
	//Get User Inputs
        printf("Input the First Binary Number (0 or 1):");
        scanf("%d",&bin1);
        
	printf("Input the Second Binary Number (0 or 1):");
        scanf("%d",&bin2);

        printf("Input the Third Binary Number (0 or 1):");
        scanf("%d",&bin3);       
        
	//Validate that All Inputs are Strictly 0 or 1
	if ((bin1 == 0 || bin1 == 1) && (bin2 == 0 || bin2 == 1) && (bin3 == 0 || bin3 == 1)) 
	{
		//Call the Function to Convert Binary to Decimal
		int decimal_value = convert_to_decimal(bin1, bin2, bin3);

		//Print the Calculated Decimal Value
                printf("The Decimal Value is: %d\n",decimal_value);
        }
       	else 
	{
		//Print Error Message If Inputs are Invalid
                printf("Invalid Binary Value\n");
        }
        
	return 0;
}
