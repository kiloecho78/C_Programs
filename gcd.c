#include <stdio.h>
#include <stdlib.h>

int getGCD(int, int);

int main(int argc, const char* argv[])
{
	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	
	printf("The greatest common divisor of %d and %d is %d\n", a, b, getGCD(a,b));
	return 0;
}

int getGCD(int a, int b)
{
	if (b==0)
		return a;
	else
		return getGCD(b, a % b);
		
}