#include <stdio.h>

int main()
{
	int i = 100;
	int *x = &i;
	printf("x's address is %p and its value is %d\n", x, *x);
	printf("i's address is %p and its value is %d\n", &i, i);
	*x = 1;
	printf("\n");
	printf("x's address is %p and its value is %d\n", x, *x);
	printf("i's address is %p and its value is %d\n", &i, i);
	return 0;
}