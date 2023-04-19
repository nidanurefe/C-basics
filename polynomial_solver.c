#include <stdio.h>
#include <math.h>

int main() {
	printf("Enter 3 coefficients for second-order polynomial:");
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	float discriminant = b * b - 4 * a * c;
	float x1 = (-b + sqrt(discriminant)) / (2 * a);
	float x2 = (-b - sqrt(discriminant)) / (2 * a);
	printf("Roots: x1: %.2f, x2: %.2f\n", x1, x2);
	
	return 0;
}
