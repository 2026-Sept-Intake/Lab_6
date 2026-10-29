#include <stdio.h>
#include <math.h>

double calculateDiscriminant(double a,double b, double c){
	double discriminant;
	discriminant = pow(b,2)-4*a*c;
	return discriminant;
}

void calculateRoots (double a, double b, double c, double discriminant, double *root1, double *root2 ){
	
	*root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);	
}

int main(){

double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("a cant be 0\n");
        return 1;
    }

    discriminant = calculateDiscriminant(a, b, c);

    if (discriminant < 0)
    {
        printf("The equation has no real roots.\n");
    }
    else
    {
        calculateRoots(a, b, c, discriminant, &root1, &root2);

        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }

return 0;
}

