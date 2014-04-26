#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
	int x,y,z;
	
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	z = x+y;
	printf("%d + %d = %d", x, y, z);
	
	return 0;
}