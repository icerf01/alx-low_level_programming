#include "main.h"

/**
 * _islower - check if an input is lower or upper case
 *
 * Return: return 0 if lowercase, return 1 if otherwise
 */
int _islower(int c)
{
	char alp;
	char a[27];
	int i = 0;
	int b;
	int d = 0;

	for(alp = 'a'; alp <= 'z'; alp++)
	{
		a[i] = alp;
		i++;
	}
	for(b = 0; b <= 26; b++)
	{
		if (c == a[b])
			d = 1;
	}

	return (d);
}