#include <stdio.h>

int main()
{
	int i = 0;
	char s[1000];

	scanf_s("%s", s, 1000);
	scanf_s("%d", &i);

	printf("%c", s[i - 1]);

	return 0;
}