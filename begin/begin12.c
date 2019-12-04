/*
*	The legs a and b of a right triangle are given.
*	Find the hypotenuse c and the perimeter P of the triangle:
*
*	c = (a^2 + b^2)^(1/2), P = a + b + c.
*/
#include <stdio.h>
#include <math.h>

int main() {
	float a = 0.0f, b = 0.0f, c = 0.0f, P = 0.0f;
	
	printf("Enter the legs of a right triangle: \na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	c = sqrt(pow(a, 2) + pow(b, 2));
	P = a + b + c;
	printf("Hypotenuse: %.2f\nPerimeter: %.2f", c, P);
	
	return 0;
}

