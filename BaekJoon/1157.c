#include <stdio.h>

int main()
{
	char s[1000000];
	int c[26] = { 0 };

	scanf_s("%s", s, 1000000);
	
	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < sizeof(s); j++)
		{
			if (s[j] == i)
			{
				c[i - 'a'] += 1;
			}
		}
	}

	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < sizeof(s); j++)
		{
			if (s[j] == i)
			{
				c[i - 'A'] += 1;
			}
		}
	}

	int max = c[0];
	int pln = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max < c[i])
		{
			max = c[i];
			pln = i;
		}
	}

	int ovlp = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max == c[i])
		{
			ovlp += 1;
		}
	}

	if (ovlp > 1)
	{
		printf("?\n");
	}
	else
	{
		printf("%c\n", pln + 'A');
	}

	return 0;
}