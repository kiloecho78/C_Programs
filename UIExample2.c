#include <stdio.h>
#include <stdbool.h>

int main()
{
	char firstName[6];
	char lastName[8];
	
	printf("Enter your First Name: ");
	scanf("%s", firstName);
	printf("Enter your Last Name: ");
	scanf("%s", lastName);
	printf("Hello, %s %s!\n", firstName, lastName);
	
	/* can also be done in a single call as follows
		  printf("Enter your First Name and Last Name: ");
		  scanf("%s %s", firstName, lastName);
		this assumes that the user will input two strings though
	*/
	return 0;
}