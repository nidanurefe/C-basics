#include <stdio.h> 
#include <math.h>

int main() {
	int number, reverse=0, temp, i, number_length=0, number_replacer;
	printf("Enter your number: "); scanf("%d", &number);
	number_replacer = number;
	while(number_replacer > 0) 
	{
		number_replacer = number_replacer / 10;
		number_length++;
	}
	for (i=number_length-1; i>=0; i--) 
	{
		temp = number%10;
		reverse = reverse + temp * pow(10, i);
		number = number / 10;
	}		
	if(reverse == number) 
	{
		printf("This number is a palindrome number. ");
	}	
	else 
	{
		printf("This number is not a palindrome number. ");
	}
	return 0;
}
