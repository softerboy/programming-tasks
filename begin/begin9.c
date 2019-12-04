/*
*	Given two nonnegative numbers a and b,
*	find their geometrical mean (a square root of their product): 
*		(a * b) ^ (1/2).
*/
#include <stdio.h>
#include <math.h>

int main() {
	float a = 0.0f, b = 0.0f;
	
	printf("Enter the two number: \na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	printf("Geometrical mean of a and b: %.2f", pow(a * b, 0.5));
	
	return 0;
}
