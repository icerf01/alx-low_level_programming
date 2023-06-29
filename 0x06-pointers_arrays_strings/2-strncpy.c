#include "main.h"

/**
 * _strncpy - func dat cpy str
 * @dest: destination var
 * @src: source var
 * @n: gauge
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp = dest, *st = src;

	while (*src)
	{
		len++;
		src++;
	}
	len++;
	if (n > len)
		n = len;
	src = st;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
