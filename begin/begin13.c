/*
*	Given the radiuses R1 and R2 of two concentric circles (R1 > R2),
*	find the areas S1 and S2 of the circles and the area S3 of
*	the ring bounded by the circles:
*
*		S1 = PI * (R1)^2, S2 = PI * (R2)^2, S3 = S1 - S2.
*
*	Use 3.14 for a value of PI.
*/
#include <stdio.h>

#define PI 3.14

int main() {
	float r1 = 0.0f, r2 = 0.0f, S1 = 0.0f, S2 = 0.0f;

	printf("Enter r1 and r2: \nr1 = ");
	scanf("%f", &r1);
	printf("r2 = ");
	scanf("%f", &r2);
	
	S1 = PI * r1 * r1;
	S2 = PI * r2 * r2;
	
	printf("\nS1 = %.2f\nS2 = %.2f\nS3 = %.2f", S1, S2, S1 - S2);

	return 0;
}

