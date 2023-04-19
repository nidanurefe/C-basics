#include <stdio.h>

int main() {
	float fahrenheit;
	printf("Enter Fahrenheit:");
	scanf("%f", &fahrenheit);
	float celcius = ((fahrenheit - 32) * 5) / 9;
	printf("%.2f fahrenheit is %.3f celcius\n", fahrenheit, celcius);
	return 0;
	
}
