#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

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
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void selectionSortArray(int arr[]) //selection sort algorithm
{
	int min;
	for(int i = 0; i < SIZE; i++)
	{
		min = i;
		for(int j = i + 1; j < SIZE; j++)
		{
			if(arr[j] < arr[min])
			min = j;
		}
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
}

int main()
{
	int numbersArray[SIZE];
	loadNumbersArray(numbersArray, 100);
	printf("Unsorted: \n");
	printArray(numbersArray);
	selectionSortArray(numbersArray);
	printf("\nSorted: \n");
	printArray(numbersArray);
	return 0;
}