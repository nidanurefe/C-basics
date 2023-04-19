#include <stdio.h>

int main() {
	int s1, s2, toplam;
	printf("Please enter the first number: ");
	scanf("%d", &s1);
	printf("Please enter the second number: ");
	scanf("%d", &s2);
	toplam = s1 + s2;
	printf("The sum of the numbers %d, and %d is: %d\n", s1, s2, toplam);
	return 0;
}
