#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int x) {
	int result = 1;
	int i;
	for (i = 2; i <= x; i++) {
		result = result * i ;
	}
	return result;
}

int combination(int n, int r) 
{
	int k = n-r;
	return factorial(n) / (factorial(r) * factorial(k));
}

int main() {
	int n, r;
	printf("Enter n and r: ");
	scanf("%d %d", &n, &r);
	
//	clock_t begin = clock();
	int result = combination(n,r);
//	clock_t end = clock();
//	printf("Time consumed: %f", (double)(end-begin) / CLOCKS_PER_SEC);
	printf("%d\n", result);

	return 0;
}

