#include <stdio.h>



int main ()
{
	const int rows =2, cols =5;
	int additionTable [rows] [cols];
//Load Array
	for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				additionTable [i] [j] = i+j;
			}
		}
	
//Print Array
	for (int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			printf("%d\t", additionTable[i][j]);
		}
		putchar('\n');
	}
	
	return 0;
}