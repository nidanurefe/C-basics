#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int number);
int numDigits(int number);
int digitsPlace(int number, int place);

int numDigits(int number) {
	int count = 0;
	while(number!=0)
	{
		count++;
		number /= 10;
	} 

	return count;
}

int digitsPlace(int number, int place) {
	int digit;
	int x;
	for (x = 1; x<=place; x++){
		digit = number%10;
		number /=10;
	}
	return digit;
}

bool isPalindrome(int number) {
	int digits = numDigits(number); 
	if(digits == 1) 
	{
		return true;
	}
	int digitLeft;
	int digitRight;
	int left = digits; //left index
	int right = 1; //right index
	bool palindrome = true;
	int x;
	for (x = 1; x<=digits; x++) { //should be half of digits
		digitLeft = digitsPlace(number,left);
//		printf("Left digit: %d ", digitLeft);
		digitRight = digitsPlace(number,right);
//		printf("Right digit: %d\n", digitRight);	
		
		if (digitLeft != digitRight) {
			palindrome = false;
		}
		
		left--; 
		right++;
		if (left <= right) {
			break; 
		}
	}
	return palindrome;
		
}

int main() {
	int number;
	printf("Enter a number or (-1) to quit: ");
	scanf("%d", &number);
	while (number >= 0) {
		bool palCheck = isPalindrome(number);
		if (palCheck) {
			printf("This number is a palindrome.\r\n");
		} else {
			printf("This number is not a palindrome.\r\n" );
		}
	printf("Enter a number or (-1) to quit: ");
	scanf("%d", &number);
	}
	return 0;
}
