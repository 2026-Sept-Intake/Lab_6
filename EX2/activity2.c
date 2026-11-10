#include<stdio.h>
#include<math.h>

void instruct(void);
double calDiscriminant(double a, double b, double c);
void calRoots(double a, double b, double disc, double *root1, double *root2);

int main(void){
	double a, b, c, disc, root1, root2;

	instruct();

	printf("Enter a: ");
	scanf("%lf", &a);
	printf("Enter b: ");
        scanf("%lf", &b);
	printf("Enter c: ");
        scanf("%lf", &c);

	if (a == 0){
		printf("a cannot be 0.\n");
		return 1;
	}
	disc = calDiscriminant(a,b,c);

		if(disc < 0){
			printf("No real roots.\n");
			return 0;
		}

		calRoots(a, b, disc, &root1, &root2);

		printf("The roots are %.3f and %.3f\n", root1, root2);
		return 0;
	}
	void instruct(void){
		printf("Quadratic equation solver\n");
		printf("This program solves ax^2 + bx + c = 0.\n\n");
	}
	double calDiscriminant(double a, double b, double c){
		return b * b - 4 * a * c;
	}
	void calRoots(double a, double b, double disc, double *root1, double *root2){
		*root1 = (0.0 - b + sqrt(disc)) / (2*a);
		*root2 = (0.0 - b - sqrt(disc)) / (2*a);
	}

