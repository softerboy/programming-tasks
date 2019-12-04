/*
*	Two nonzero numbers are given.
*	Find the sum, the difference, the product,
*	and the quotient of their absolute values.
*/
#include <stdio.h>

int main() {

	float a = 0.0f, b = 0.0f;
	
	printf("Enter the two number: \na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	// find their absolute values
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	
	printf("Sum = %.2f\n", a + b);
	printf("Difference = %.2f\n", a > b ? a - b : b - a);
	printf("Product = %.2f\n", a * b);
	printf("Quotient = %.2f\n", a / b);

	return 0;
}

