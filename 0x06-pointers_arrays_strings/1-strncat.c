#include "main.h"

/**
 * _strncat - funct that concatenate
 * two strings.
 * @dest: destination var
 * @src: source var 
 * @n:counter
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp = dest, *st = src;

	while (*src)
	{
		len++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > len)
		n = len;
	src = st;
	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}
