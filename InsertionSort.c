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

void insertionSortArray(int arr[]) //insertion sort algorithm
{
	for(int i = 1; i < SIZE; i++)
	{
		int value = arr[i];
		int j = i - 1;
		int done = 0;
		do
		{
			if(arr[j] > value)
			{
				arr[j + 1] = arr[j];
				j--;
				if(j < 0)
				done = 1;
			}
			else
				done = 1;
		} while (!done);
		arr[j + 1] = value;
	}
}

int main()
{
	int numbersArray[SIZE];
	loadNumbersArray(numbersArray, 100);
	printf("Unsorted: \n");
	printArray(numbersArray);
	insertionSortArray(numbersArray);
	printf("\nSorted: \n");
	printArray(numbersArray);
	return 0;
}