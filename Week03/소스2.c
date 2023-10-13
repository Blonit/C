#include <stdio.h>

int main()
{
	int a = 0;

	printf("input = ");
	scanf_s("%d", &a);
	printf("\n\n");

	for (int j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", a, j, a * j);
	}

	printf("\n\n");
	

	return 0;
}