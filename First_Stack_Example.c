//DOES NOT WORK, INVALID CONVERSION FROM INT TO INT* ERRORS

#include<stdio.h>
#define MAX_STACK_SIZE 5
int *endOfStack;
int *pointer;
int theStack(MAX_STACK_SIZE);

void initStack()
{
	endOfStack = theStack;
	pointer = theStack;
}

void pushStack(int inputValue)
{
	if(pointer != endOfStack + MAX_STACK_SIZE)
	{
		*pointer = inputValue;
		pointer++;
	}
}
int* popStack()
{
	if(pointer != endOfStack)
	{
		pointer--;
		return pointer;
	}
	return NULL;
}

int main()
{
	initStack();
	for(int i = 0; i < MAX_STACK_SIZE; i++)
	pushStack(i);
	
	int *popValue = popStack();
	while(popValue != NULL)
	{
		printf("%d\n", *popValue);
		popValue = popStack();
	}
	return 0;
}