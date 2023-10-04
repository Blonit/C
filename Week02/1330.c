#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a < b)
	{
		printf("<\n");
	}
	else if (a > b)
	{
		printf(">\n");
	}
	else if (a == b)
	{
		printf("==\n");
	}

	return 0;
}