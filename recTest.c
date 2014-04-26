#include <stdio.h>
void recTest(int i)
{
	if(i<6)
	{
		recTest(i+1);
		printf("%i\n", i);
	}
}

int main()
{
	recTest(0);
	return 0;  //not necessary to return 0 for some reason
}