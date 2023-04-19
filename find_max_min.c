#include <stdio.h>
#include <stdlib.h>

// This program prints the maximum and minimum elements of the entered array.

int main() {
	int arr[] = {4,5,6,7,32,21,12,1,55};
	int max, min, i, length;
	length = sizeof(arr) / sizeof(int);
	for(i=0; i<length; i++) {
		if(arr[i]<min) {
			min = arr[i];
		} else if (arr[i]>max) {
			max = arr[i];
		}
	}
	printf("max: %d, min: %d", max, min);
	return 0;
}
