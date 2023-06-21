#include "main.h"

/**
 * _islower - check if an input is lower or upper case
 *
 * Return: return 0 if lowercase, return 1 if otherwise
 */
int _islower(int c)
{
	char i;
	int l = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			l = 1;
	}

	return (l);
}
