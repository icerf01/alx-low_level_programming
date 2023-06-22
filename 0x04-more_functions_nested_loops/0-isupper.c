#include "main.h"

/**
 * _isupper - check if upper case
 *
 * Return: return 0 if lowercase, return 1 if otherwise
 */
int _isupper(int c)
{
	int alp;
	int a[27];
	int i = 0;
	int b;
	int d = 48;

	for(alp = 'A'; alp <= 'Z'; alp++)
	{
		a[i] = alp;
		i++;
	}
	for(b = 0; b <= 26; b++)
	{
		if (c == a[b])
			d = 49;
	}

	return (d);
}
