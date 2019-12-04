/*
*	Given the length L of a circumference, find the radius R
*	and the area S of the circle. Take into account that
*
*		L = 2 * PI * R,  S = PI * R^2. 
*	
*	Use 3.14 for a value of PI.
*/
#include <stdio.h>

#define PI 3.14

int main() {
	float L = 0.0f, R = 0.0f, S = 0.0f;
	
	printf("Enter the L length of circumference: \nL = ");
	scanf("%f", &L);
	
	R = L / (2 * PI);
	S = (L * L) / (4 * PI);
	printf("R = %.2f\nS = %.2f", R, S);
	
	return 0;
}

