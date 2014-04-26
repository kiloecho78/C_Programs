#include <stdio.h>

int uInput = 0;
int getFactorial(int);

int main()
{
	printf("Enter a number to find it's factorial: ");
	scanf("%i", &uInput);
	getFactorial(uInput);
	printf("%i! is: %d\n", uInput, getFactorial(uInput));
	return 0;
}

int getFactorial(int n)
{
	int total;
	if(n>1)
	{
		total = n * getFactorial(n-1);
		return total;
	}
	else
		return n;
}