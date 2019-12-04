/*
*	Given the side a of a square, 
*	find the perimeter P of the square: P = 4·a.
*/

#include <stdio.h>

int main() {
	float side = 0.0f;
	
	printf("Enter a side of the square: ");
	scanf("%f", &side);
	
	printf("Perimeter of square equal to: %.2f", 4 * side);
	
	return 0;
}
