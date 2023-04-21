#include <stdio.h>

int main() {
	int n1, n2;
	printf("Enter the first number: "); scanf("%d", &n1);
	printf("Enter the second number: "); scanf("%d", &n2);
	int *p1, *p2;
	p1 = &n1;
	p2 = &n2;
	int sum = *p1 + *p2;
	printf("Addresses are %p and %p\n", *p1, *p2);
	printf("the sum is: %d", sum);
	return 0;
}
