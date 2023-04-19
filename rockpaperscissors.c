#include <stdio.h>
#include <stdlib.h>

int main(){
	int point = 0;
	while (1) {
	int choice; 
	printf("Enter your choice (1: rock 2: paper 3: scissors 4: quit)\n");
	scanf("%d", &choice);
	if (choice<=0 || choice >4) {
		printf("Try again! \n");
		printf("Enter your choice (1: rock 2: paper 3: scissors)\n");
		scanf("%d", &choice);
	}
	int computers_choice;
	srand(time(NULL));
	computers_choice = rand() % 4;
	if (choice == 1) {
		if (computers_choice == 1) {
			printf("Scoreless");
		} else if (computers_choice == 2) {
			printf("You lost!");
			point--;
		} else if (computers_choice == 3) {
			printf("You win!");
			point++;
		}
	}
	else if (choice == 2) {
	
		if (computers_choice == 1) {
			printf("You win");
			point++;
		} else if (computers_choice == 2) {
			printf("Scoreless");
		} else if (computers_choice == 3) {
			printf("You lost");
			point--;
		}
	}
	else if (choice==3) {
	
		if (computers_choice == 1) {
			printf("You lost");
			point--;
		} else if (computers_choice == 2) {
			printf("You win!");
			point++;
		} else if (computers_choice == 3) {
			printf("Scoreless");
		}
	}
	else if(choice==4) {
		break;
	}
	printf("\nYou entered %d. Computers choice is %d..\n", choice, computers_choice);
	}
	printf("Your score is %d\n", point);

	return 0;
	
	
}
