#include <stdio.h>

// Constant definition for PI
const float PI = 3.14159;

//Function prototypes
float calculate_area(float r);
float calculate_circumference(float r);

int main(void)
{       
        float r;

        //Get the Radius from the User
        printf("Please Enter the Radius of the Circle:");
        scanf("%f", &r);
        
	//Calculate the Area and Circumference using a Function
        float area = calculate_area(r);
        float circumference = calculate_circumference(r);
        
	//Display the Calculated Area and Circumference
	printf("The Area of the Circle is: %.2f\n", area);
        printf("The Circumference of the Circle is: %.2f\n", circumference);
       
       	return 0;
}

//Function to Calculate Area
float calculate_area(float r)
{
        return PI*r*r;
}

// Function to Calculate Circumference
float calculate_circumference(float r)
{
        return 2*PI*r;
}

