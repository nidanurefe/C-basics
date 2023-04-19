#include <stdio.h>
#include <stdlib.h>

// This program prints the entered text by reversing it.

int main() {
	char text[100];
	printf("Enter your test: "); gets(text);
	int i; 
	int length = strlen(text);
	for(i=length; i>=0; i--) {
		printf("%c", text[i]);
	}	
	return 0;
}
