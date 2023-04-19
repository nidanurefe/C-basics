#include <stdio.h>
#include <stdlib.h>

//This program prints an entered character as many times as desired.

int main() {
	char ch;
	int number;
	printf("Enter the character: "); scanf("%c", &ch);
	printf("Enter the number: "); scanf("%d", &number);
	int i;
	for(i=0; i<number;i++) {
		printf("%c", ch);
	}
	return 0;
}
