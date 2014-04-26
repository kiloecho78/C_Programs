#include <stdio.h>

#define bool int
#define true 1
#define false 0

int main ()
{
	bool b = (10==10);
	bool bTrue = true;
	bool bFalse = false;
	printf("The answer is %d\n", b)
	return 0;
}