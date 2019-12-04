/*
*	Given the radius R of a circle, find the length
*	L of the circumference and the area S of the circle:
*		L = 2 * PI * R
*		S = PI * R^2.
*
*	Use 3.14 for a value of PI.
*/
#include <stdio.h>

#define PI 3.14

int main() {
	
	float r = 0.0f;
	
	printf("Enter the radius of the circle: \nr = ");
	scanf("%f", &r);
	
	printf("Circumreference and area equal to\nL = %.2f\nS = %.2f", 2 * PI * r, PI * r * r);
	
	return 0;
}
