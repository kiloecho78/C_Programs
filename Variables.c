#include <stdio.h>

int main()
{
	int num = 931;
	float numb = 2.7548;
	char c = 'K';
	char listOfCharacters [50];
	int numa = 8675309;
	
	printf("The number 'num' is %d\n", num);
	printf("The number 'numb' is $%2.2f\n", numb);
	printf("My name is %ceith.\n", c);
	sprintf(listOfCharacters, "%d", numa);
	printf("Our list of characters are: %s", listOfCharacters);
	return 0;
}