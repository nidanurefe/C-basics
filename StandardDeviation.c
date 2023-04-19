#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_NUMBER 50


int main() {
	int ages[MAX_NUMBER];
	int n_ages = 0;
	int age = 0;
	
	while (n_ages < MAX_NUMBER) {
		printf("Enter age (Type 0 to quit): ");
		scanf("%d", &age);
		if (age == 0) {
			break;
		}
		ages[n_ages] = age;
		n_ages++;
	}
	int i;
	
	int sum1 = 0; 
	for (i=0; i<n_ages; i++) {
		sum1 = sum1 + ages[i];
	}
	float mean = (float) sum1 / n_ages;

	float sum2=0.0;
	for (i=0; i<n_ages; i++) {
		sum2 = sum2 + (ages[i] - mean) * (ages[i] - mean);
	}


	float stdev;
	stdev = sqrt((float) sum2 / (float) n_ages);
	printf("%f", stdev);

	
	return 0;
}
