#include <stdio.h>
#define PI 22/7.0  // Defined globally

// function prototypes
float area(int radius);  
float circumference(int radius);

int main() {
   
    int r;
    printf("Enter the radius of the circle: "); // Get the radius
    scanf("%d", &r);
  
    // caclulate abd print area
    float answer = area(r); 
    printf("The area of the circle is: %.2f\n", answer);
    
    // calculate and print circumference
    float answer2 = circumference(r); 
    printf("The circumference of the circle is: %.2f\n", answer2);

    return 0;
}

float area(int radius) {
    return PI * radius * radius; 
}

float circumference(int radius) {
    return 2 * PI * radius; 
}

