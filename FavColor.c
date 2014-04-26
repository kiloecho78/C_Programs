#include <stdio.h>

int main()
{
	char favColor[20];
	printf("Hey buddy, what's your favorite color?");
	gets (favColor);
	printf("\nThanks buddy, now I know your favorite color is %s\n", favColor);
	return 0;
}