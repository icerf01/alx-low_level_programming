#include "main.h"

/**
 * _strncat - a function that 
 * concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: pointer to resulting str
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
