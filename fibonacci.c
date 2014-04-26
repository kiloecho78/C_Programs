#include <stdio.h>
//#include <stdlib.h>

int fib(int);

int main()
{
	int numberOfSeries;
	int i;
	printf("How many places of the Fibonacci sequence do you want to see? ");
	scanf("%d", &numberOfSeries);
	for (i=0; i<numberOfSeries; i++)
	{
		printf("%d ", fib(i));
	}
		printf("\n");
	return 0;
}

int fib(int num)
{
	if ((num==0)||(num==1))
	{
		return num;
	}
	else
		return fib(num-1) + fib(num -2);
}