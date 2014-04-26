#include <stdio.h>
#define PI 3.14

int main()
{
	float diameter;
	float height;
	float radius;
	float surfaceArea;
	
	printf("Please enter the diameter: ");
	scanf("%f", &diameter);
	printf("Please enter a height: ");
	scanf("%f", &height);
	
	//printf("\nDiameter is %f, and height is %f\n", diameter, height);
	radius = diameter / 2;
	surfaceArea = (2 * PI * (radius * radius)) + (2 * PI * radius * height);
	printf("The surface area of your cylinder is %.3f\n", surfaceArea);
	
	return 0;
}