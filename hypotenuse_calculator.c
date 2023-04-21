#include <stdio.h>
#include <math.h>

int main() {
	int s1, s2;
	printf("Enter perpendicular sides: "); scanf("%d %d", &s1, &s2);
	float hypotenuse = sqrt(pow(s1,2) + pow(s2,2));
	printf("hypotenuse: %f", hypotenuse);
	return 0;
}
