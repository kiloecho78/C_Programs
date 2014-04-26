#include <stdio.h>
int addTwoNumbers(int, int);
void myFunction(int);
void myOtherFunction(int*);
int main()
{
	int x = 10;
	int y = 20;
	int n1 = 50;
	int n2 = 50;
	int z = addTwoNumbers(x , y);
	printf("%i + %i = %i\n", x, y, z);
	
	myFunction(n1);
	printf("%i\n", n1);
	
	myOtherFunction(&n2);
	printf("%i\n", n2);
		
	return 0;
}

int addTwoNumbers(int num1, int num2)
{
	return num1 + num2;
}

void myFunction(int number)
{
	number = number	+ 100;
}

void myOtherFunction(int* number)
{
	*number = *number	+ 100;
}