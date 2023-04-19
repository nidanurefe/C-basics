#include <stdio.h>
#include <stdlib.h>


int main() {
	int n, odd_sum=0, even_sum=0, i;
	scanf("%d", &n);
	for (i=0; i<=n; i++) {
		if (i%2==0) {
			even_sum = even_sum + i;
		} else if (i%2==1) {
			odd_sum = odd_sum + i;
		}
	}
	printf("Even sum: %d, Odd sum: %d", even_sum, odd_sum);
	return 0;
}
