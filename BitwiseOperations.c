#include <stdio.h>

int main()
{
	int x = 223, y = 10, z=2;
	int a = x&y;
	int b = x|y;
	int c = x^y;
	int d = x<<z;
	int e = x>>z;
	int f = ~y;
	printf("X&Y: %d\nXorY: %d\nXxorY: %d\nXbitshiftleftY: %d\nXbitshiftrightY: %d\nnotY: %d\n", a, b, c, d, e, f);
	return 0;
}