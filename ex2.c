#include <stdio.h>
#include <math.h>

void instruct(void)
{
	printf("Qudratic Equation Solver\n");
	printf("Enter the coefficients a, b and c.\n");
}
double calculateDiscriminant(double a, double b, double c)
{
	double discriminant;
	
	discriminant = b * b - 4 * a * c;

	return discriminant;
}
void calculateRoots(double a, double b, double c,
        double discriminant,
	double *root1, double *root2) {

	*root1 = (-b + sqrt(discriminant)) / (2 * a);
	*root2 = (-b - sqrt(discriminant)) / (2 * a);
}
int main(void) {
	double a, b, c;
	double discriminant;
	double root1, root2;

	instruct ();

	printf("Enter a: ");
	scanf("%lf", &a);

	printf("Enter b: ");
        scanf("%lf", &b);
	 
	printf("Enter c: ");
	scanf("%lf", &c);

        if (a == 0) {
		printf("Error: a must not be zero.\n");
		return 1;
        }

        discriminant = calculateDiscriminant(a, b, c);

        if (discriminant < 0) {
	   printf("The equation has no real1 roots.\n");
        } else {
	    calculateRoots(a, b, c, discriminant,
			&root1, &root2);

	    printf("Root 1 = %.3f\n", root1);
	    printf("Root 2 = %.3f\n", root2);
       }

       return 0;
}


