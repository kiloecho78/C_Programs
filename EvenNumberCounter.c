#include <stdio.h>
int main()
{

int i = -1;

while(i < 25)
{
	i++;
	if((i % 2 == 1) || (i == 0))
	continue;
	
	printf("%d\n", i);
}
return 0;
}