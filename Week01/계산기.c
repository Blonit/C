#include <stdio.h>

int main()
{
	double a = 0;
	double b = 0;
	
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);

	printf("a + b = %lf\n", a + b);
	printf("a - b = %lf\n", a - b);
	printf("a * b = %lf\n", a * b);
	printf("a / b = %lf\n", a / b);
	printf("a %% b = %d\n", (int)a % (int)b);

	return 0;
}
