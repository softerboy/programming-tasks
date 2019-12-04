/*
*	The edges a, b, c of a right parallelepiped are given. 
*	Find the volume V = a * b * c and the surface area 
*	S = 2 * (a * b + b * c + a * c) of the right parallelepiped.
*/
#include <stdio.h>

int main() {
	
	float a = 0.0f, b = 0.0f, c = 0.0f;
	
	printf("Enter the sides of right parallelepiped: \na = ");
	scanf("%f", &a);

	printf("b = ");
	scanf("%f", &b);
	
	printf("c = ");
	scanf("%f", &c);
	
	printf("Volume and surface area of right parallelepiped:\n");
	printf("V = %.2f\n", a * b * c);
	printf("S = %.2f", 2 * (a * b + b * c + a * c));
	
	
	return 0;
}
