#include <stdio.h>

int main()
{
	int value = 1234;
	int *n1; int *n2; int *n3; int *n4;
	/*int *p;  for some reason when these lines are added to the code 
	int n;		the code crashes, however it does compile correctly.
	
	*p = 100;
	n = 200;*/
	
	n1 = &value;
	n2 = n1;
	n3 = n2;
	n4 = n3;
	printf("value = %i\n", value);
	printf("n1 = %i\n", *n1);
	printf("n2 = %i\n", *n2);
	printf("n3 = %i\n", *n3);
	printf("n4 = %i\n", *n4);
	/*printf("Address [%p] = [%d]\n", p, *p);  see above comments
	printf("Address [%p] = [%d]\n", &n, n);*/	//see above comments
	
	
	return 0;
}