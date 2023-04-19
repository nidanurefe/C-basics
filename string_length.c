#include <stdio.h>
#include <stdlib.h>

// This program calculates the length of the entered text.

int main() {
	int text[100];
	printf("Enter your text: "); gets(text);
	int length=0;
	int i;
	for (i=0; text[i] != '\0'; i++) {
		length = length + 1;
	}
	length = strlen(text);
	printf("length is: %d", length);
	return 0;
}
