#include <stdio.h>

int main()
{	
	const float pi = 3.14;
	int x=4, y=1;
	char ch = 'A';
	int c = (int)ch;
	printf("This is a %s, this is a %d\n", "string", 7);  //use %d only when passing a number to the print function
	printf("The value of PI is %.2f\n", pi);   //must use %f to denote a variable with a numeric value in print (the .2 before f means accuracy of 2 decimal pts)
	float z = (float)y/(float)x;
	printf("y/x = %f\n",z);
	printf("The ASCII value of %c is %i\n", ch, c);
	return 0;
}