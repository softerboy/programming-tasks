/*
*   The sides a and b of a rectangle are given. 
*   Find the area S = a * b and the perimeter 
*   P = 2 * (a + b) of the rectangle
*/
#include <stdio.h>

int main() {
	float a = 0.0f, b = 0.0f;
	
	printf("Enter the a and b sides of rectangle: \na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	printf("Area of rectangle equal to: %.2f\n", a * b);
	printf("Perimeter of rectangle equal to: %.2f\n", 2 * (a + b));
	
	return 0;
}
