#include <stdio.h>
#define ERROR 0.0001

//This program calculates the square root of a number using Babylonian square root method.

int main() {
	printf("Type 0 if you want to quit. ");
	int number=1;
	while(number!=0)
	{	
	printf("\nEnter the number: "); scanf("%d", &number);
	float sn = (float) number;
	while(sn*sn-number>ERROR) 
	{
		sn = 0.5 * (sn + number/sn);
	}
	printf("%f", sn);
	}
	return 0;
	
	
}
