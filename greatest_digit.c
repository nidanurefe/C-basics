#include <stdio.h>
#include <stdlib.h>

// This program prints the largest digit of a given number.

int main() {
	int num;
	printf("Enter your number: "); scanf("%d", &num);
	int temporary=0, greatest=0;
	while(num>0) {
		temporary = num % 10;
		if (temporary>greatest) {
			greatest = temporary;
		}
		num = num / 10;
	}
	printf("The greatest digit is: %d", greatest);
	return 0;
}
