#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

void randomizeTimer() //apparently randomizes the timer
{
	time_t seconds;
	time(&seconds);
	srand((unsigned int) seconds);
}

void loadNumbersArray(int arr[], int max) //loads random numbers into the NumbersArray
{
	randomizeTimer();
	for(int i = 0; i < SIZE; i++)
		arr[i] = rand() % max + 1;
}

void printArray(int arr[])	//prints the array element by element
{
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void combSortArray(int arr[])	// comb sort algorithm to sort arrays
{
	int gap = SIZE, swaps = 1, i =0;
	while(gap > 1 || swaps ==1)
	{
		gap = (int)((float)gap / 1.247330950103979);
		printf("gap = %d\n", gap);
		if(gap < 1)
			gap = 1;
		i = 0;
		swaps = 0;
		for(i = 0; i + gap < SIZE; i++)
		{
			if(arr[i] > arr[i + gap])
			{
				int tmp = arr[i];
				arr[i] = arr[i + gap];
				arr[i + gap] = tmp;
				swaps = 1;
			}
			printf("gap = %d\n", gap);
		}
	}
}



int main()
{
	int numbersArray[SIZE];
	loadNumbersArray(numbersArray, 100);
	printf("Unsorted: \n");
	printArray(numbersArray);
	combSortArray(numbersArray);
	printf("\nSorted: \n");
	printArray(numbersArray);
	return 0;
}