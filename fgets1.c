#include <stdio.h>

int main()
{
	char buffer1[5];
	char buffer2[5];
	fgets(buffer1, 5, stdin);
	
	fgets(buffer2, 5, stdin);
	
	printf("%s %s\n", buffer1, buffer2);
	
	return 0;
}