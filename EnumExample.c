#include<stdio.h>
#include<windows.h>
enum colors { RED, YELLOW, GREEN, BLUE, WHITE};
void printColor(char* textToPrint, enum colors colorToUse)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int i;
	switch(colorToUse)
	{
		case RED: i = 12; break;
		case YELLOW: i = 14; break;
		case GREEN: i = 10; break;
		case BLUE: i = 9; break;
		case WHITE: i = 15; break;
		default: break;
	}
	SetConsoleTextAttribute(consoleHandle, i);
	puts(textToPrint);
	SetConsoleTextAttribute(consoleHandle, 7);
}
int main()
{
	enum colors c = RED;
	printColor("The color is RED", c);
	printColor("The color is BLUE", BLUE);
	return 0;
}