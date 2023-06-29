#include "main.h"

/**
 * *leet - encode str
 * @s: input str pointer
 * Return: str result pointer
 */
char *leet(char *s)
{
	int i = 0, j;
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == str[j])
				s[i] = sub[j];

		i++;
	}

	return (s);
}
