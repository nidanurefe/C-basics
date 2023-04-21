#include <stdio.h>
#include <math.h>

int main() {
	int number, number_replacer, number_length=0, is_armstrong=0,i, digit;
	printf("Enter your number: "); scanf("%d", &number);
	number_replacer = number;
	while(number_replacer > 0) 
	{
		number_replacer = number_replacer / 10;
		number_length++;
	}
	number_replacer = number;	
	for(i=0; i<number_length;i++) 
	{
		is_armstrong = is_armstrong + pow(number_replacer % 10, number_length);
		number_replacer = number_replacer / 10;
	}
	if(is_armstrong == number) {
		printf("Armstrong number. ");
	}
	else {
		printf("Not armstrong number. ");
	}
	
	return 0;
	
	
}
