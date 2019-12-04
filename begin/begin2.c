/*
*	Given the side a of a square, 
*   find the area S of the square: S = a^2. 
*/

#include <stdio.h>

int main() {
	float side = 0.0f;
	
	printf("Enter a side of the square: ");
	scanf("%f", &side);
	
	printf("Area of square equal to: %.2f", side * side);
	
	return 0;
}
