#include <stdio.h>

int main()
{

	int i = 0;		// initial control value

START:				// label text, can be anything in all caps

	printf("%d\n", i); //what to execute when label is called
	if (i<10)
	{
		i++;
		goto START;		//calls the label "START"
	}
	return 0;
}
