#include <stdio.h>


char s[1000000];

int main()
{

	scanf_s("%[^\n]s", s, 1000000);
	
	int count = 0;

	for (int i = 0; i < sizeof(s); i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ' || s[i - 1] != ' ' && s[i] == NULL)
		{
			count++;
		}
	}

	
	printf("%d", count);

	return 0;
}