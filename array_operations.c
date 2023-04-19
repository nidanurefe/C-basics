#include <stdio.h>
#include <stdlib.h>

//This program creates an array with user inputs, deletes the element, inserts a value in the desired index, sorts the array.

#define MAX_LENGTH 100

int main() {
	int arr[MAX_LENGTH];
	int current_size,i;
	//Creating the array.
	printf("Enter the size of the array: "); scanf("%d", &current_size);
	for(i=0; i<current_size; i++) 
	{
		printf("arr[%d]: ", i); scanf("%d", &arr[i]);
	}
	printf("Your array: \n");
	for(i=0; i<current_size;i++) 
	{
		printf("%d ", arr[i]);
	}
	//Deleting the desired element.
	int removed_index;
	printf("\nEnter the index of the element you want to delete: "); scanf("%d", &removed_index);
	for(i=removed_index; i<current_size; i++) 
	{
		arr[i] = arr[i+1]; 
	}
	current_size --;
	printf("\nNew array: ");
	for(i=0; i<current_size; i++) 
	{
		printf("%d ", arr[i]);
	}
	//Inserting a value at a specific position
	int inserted_index;
	printf("\nEnter the index of the element you want to insert: "); scanf("%d", &inserted_index);
	printf("\nEnter the inserted value: "); scanf("%d",&arr[inserted_index]);
	printf("\nNew array: ");
	for(i=0; i<current_size; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//Sorting the array
	int j, temporary;
	for(i=0; i<current_size; i++) {
		for(j=i+1; j<current_size; j++) {
			temp = arr[i];    
            arr[i] = arr[j];    
            arr[j] = temp; 
		}
	}
	for(i=0; i<current_size; i++) 
	{
		printf("%d ", arr[i]);
	}
	
	
	return 0;
	
}
