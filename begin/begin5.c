/*
*	Given the edge a of a cube, find the volume 
*	V = a ^ 3 and the surface area S = 6 * a^2 of the cube.
*
*/
#include <stdio.h>

int main() {
	
	float a = 0.0f;
	
	printf("Enter the edge of the cube: \na = ");
	scanf("%f", &a);
	
	printf("Volume of cube equal to: %.2f\n", a * a * a);
	printf("Surface area of cube equal to: %.2f\n", 6 * a * a);
	
	return 0;
}
