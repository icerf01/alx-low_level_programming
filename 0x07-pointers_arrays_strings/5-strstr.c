#include "main.h"

/**
 * _strstr - funct dat locates 
 * a substring.
 * @haystack: input str to search in
 * @needle: str to loc str haystack
 * Return: pntr to found str or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
