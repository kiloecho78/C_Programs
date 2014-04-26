//DOES NOT COMPILE!!!!!!!!!!!!!!!!!!!!!

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

void countingSortArray(int arr[])	// counting sort algorithm to sort arrays
{
	int i, min, max;
	min = arr[0]; max = arr[0];
	for(i = 1; i < SIZE; i++)
	{
		if(arr[i] < min)
		min = arr[i];
		else if (arr[i] > max)
		max = arr[i];
	}
	
	int range = max -  min + 1;
	int *count = calloc(range * sizeof(int), sizeof(int));
	
	for(i = 0; i < range; i++)
		count[i] = 0;
	
	for(i = 0; i < SIZE; i++)
		count[arr[i] - min]++;
	int z = 0;
	for(i = min; i <= max; i++)
		for(int j = 0; j < count[i - min]; j++)
			arr[z++] = i;
	free(count);
}



int main()
{
	int numbersArray[SIZE];
	loadNumbersArray(numbersArray, 100);
	printf("Unsorted: \n");
	printArray(numbersArray);
	countingSortArray(numbersArray);
	printf("\nSorted: \n");
	printArray(numbersArray);
	return 0;
}