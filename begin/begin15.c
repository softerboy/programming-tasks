/*
*	Given the area S of a circle, find the diameter D 
*	and the length L of the circumference. Take into account that 
*
*		L = PI * D,  S = PI * D^2 / 4. 
* 	
*	Use 3.14 for a value of PI.
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
	
	float S = 0.0f, D = 0.0f, L = 0.0f;
	
	printf("Enter the S area of a circle: \nS = ");
	scanf("%f", &S);
	
	D = 2 * sqrt(S / PI);
	L = 2 * sqrt(S * PI);
	
	printf("\nD = %.2f\nL = %.2f", D, L);
	

	return 0;
}

