/*
*	Given the diameter d of a circle, find the length 
*	L of the circle: L = pi * d. Use 3.14 for a value of pi.
*/
#include <stdio.h>

#define PI 3.14

int main() {
	float d = 0.0f;
	
	printf("Enter a diameter of the circle: \nd = ");
	scanf("%f", &d);
	
	printf("\nLength of the circle equal to: %.2f\n", PI * d);
	return 0;
}
