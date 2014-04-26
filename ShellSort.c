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

void shellSortArray(int arr[]) //shell sort algorithm
{
	int j, i, k, m, mid;
	for(m = SIZE / 2; m > 0; m = m / 2)
	{
		for(j = m; j < SIZE; j++ )
		{
			for(i = j-m ; i >= 0 ; i = i - m)
			{
				if(arr[i + m] >= arr[i])
				break;
				else
				{
					mid = arr[i];
					arr[i] = arr[i + m];
					arr[i + m] = mid;
				}
			}
		}
	}
}

int main()
{
	int numbersArray[SIZE];
	loadNumbersArray(numbersArray, 100);
	printf("Unsorted: \n");
	printArray(numbersArray);
	shellSortArray(numbersArray);
	printf("\nSorted: \n");
	printArray(numbersArray);
	return 0;
}