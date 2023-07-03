#include "main.h"

/**
 * _strpbrk -  a function that search
 * a string for any of a set of byte
 * @s: an input string
 * @accept: in char to loc into s
 * Return: matching pntr or null
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
