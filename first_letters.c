#include <stdio.h>
#include <stdlib.h>

// This program prints the first letters of the words of an entered text.

int main() {
	char text[100]; 
	printf("Enter your text: "); gets(text);
	char letter;
	int i, length;
	length = strlen(text);
	printf("%c ", text[0]);
	for(i=0; i<length; i++) {
		if (text[i] == ' ') {
			printf("%c ", text[i+1]);
		}
	}	
	return 0;
}
