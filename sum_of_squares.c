#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Add the squares of the numbers 1 to n.\nn: ");
	scanf("%d", &n);
	int i, sum=0;
	for (i=0; i<=n; i++) {
		sum = sum + i * i;
	} 
	printf("%d", sum);
	return 0;
	
	
}
