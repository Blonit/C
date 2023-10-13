#include <stdio.h>

int main()
{
	int a = 0;

	printf("input = ");
	scanf_s("%d", &a);
	printf("\n\n");

	for (int i = 0; i < a; i++)
	{
		for (int j = i; j <= (a - 2); j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= (i * 2); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = (a - 1); i > 0; i--)
	{
		for (int j = i; j < a; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= ((i - 1) * 2); k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");


	return 0;
}