#include <stdio.h> //printf
#include <stdlib.h> //strand, rand, EXIT_SUCCESS
#include <time.h>
#include <stdbool.h>

#define N_ITERATIONS 100000

int main() 
{
	srand(time(NULL));
	
	int strategy1 = 0;  //wins if stay
	int strategy2 = 0;  //wins if change
	int opened_door;
	int i;
	for (i=0; i < N_ITERATIONS; i++) 
	{
		int car_door = rand()%3 + 1;	
		int selected_door = rand()%3 + 1;
		
		if(car_door != selected_door) 
		{
			opened_door = 6 - car_door - selected_door;
			unopened_door = car_door;
		}
		else 
		{
			bool heads = rand()%2 == 0;
			if (car_door == 1) 
			{
				opened_door = heads ? 2 : 3;
			}
			else if (car_door == 2) 
			{
				opened_door = heads ? 1 : 3;
			}
			else 
			{
				opened_door = heads ? 1 : 2;
			}
			unopened_door = 6 - car_door - selected_door;
		}
		
		if (car_door == selected_door ) 
		{
			strategy1++; 
		}
		else
		{
			strategy2++;
		}
	}
	
	
	double win_ratio_1 = (double) strategy1/N_ITERATIONS;
	double win_ratio_2 = (double) strategy2/N_ITERATIONS;
	printf("win ratio for strategy1: %.3lf\n", win_ratio_1);
	printf("win ratio for strategy2: %.3lf\n", win_ratio_2);

	return EXIT_SUCCESS;
}
