#include <stdio.h>
#include <stdlib.h>

//This program calculates the number of times the selected character occurs in the entered text.

int main(int argc, char *argv[]) {
	char text[100];
	gets(text);
	char ch;
	scanf("%c", &ch);
	int number=0;
	int i;
	for(i=0; i<100 ; i++) {
		if (text[i] == ch) {
			number = number + 1;
		}
	}
	printf("%d times", number);
	return 0;
}
