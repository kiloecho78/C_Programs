#include <stdio.h>
#define ADDRESSES 5
#define OCTETS 4

int main()
{
	int ips[ADDRESSES][OCTETS] = {
								{192,168,1,1},
								{31,13,77,55},
								{173,194,46,19},
								{127,0,0,1},
								{141,101,124,84}
								};
	int i, j;
	for(i = 0; i<ADDRESSES; i++)
		{
			for(j=0; j<OCTETS; j++)
			{
				if(j==(OCTETS-1))
				{
					printf("%d (x%X)", ips[i][j], ips[i][j]); // can remove (x%X) to get rid of hex values
				}
				else
				{
					printf("%d (x%X).", ips[i][j], ips[i][j]);
				}
			}
			putchar('\n');
		}
	
	return 0;
}

/*
could also have done this without pre-defining ADDRESSES & OCTETS, instead use const int
then use:
	ips[0][0] = 192; ips[0][1] = 168; ips[0][2] = 1; ips[0][3] = 1;
	ips[1][0] = 31; ips[1][1] = 13; ips[1][2] = 77; ips[1][3] = 55;
	ips[2][0] = 173; ips[2][1] = 194; ips[2][2] = 46; ips[2][3] = 19;
	ips[3][0] = 127; ips[3][1] = 0; ips[3][2] = 0; ips[3][3] = 1;
	ips[4][0] = 141; ips[4][1] = 101; ips[4][2] = 124; ips[4][3] = 84;
*/