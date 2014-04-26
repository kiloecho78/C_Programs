#include <stdio.h>
#include <windows.h>

int main()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	char name[255];
	SetConsoleTextAttribute(consoleHandle, 12);
	printf("Hey, Buddy! What's your name? ");
	SetConsoleTextAttribute(consoleHandle, 15);
	gets(name);
	SetConsoleTextAttribute(consoleHandle, 120); /*if larger than 15, 
	changes background color based on order of original
	16 colors and text color to corresponding original 16 colors*/
	printf("Nice to meet you ");
	SetConsoleTextAttribute(consoleHandle, 15);
	printf("%s\n", name);
	SetConsoleTextAttribute(consoleHandle, 7);
	return 0;
}