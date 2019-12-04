/*
*	Given two numbers a and b, find their average: (a + b) / 2. 
*/
#include <stdio.h>

int main() {
	float a = 0.0f, b = 0.0f;
	
	printf("Enter the two number: \na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	printf("Average of a and b: %.2f", (a + b) / 2);
	
	return 0;
}
