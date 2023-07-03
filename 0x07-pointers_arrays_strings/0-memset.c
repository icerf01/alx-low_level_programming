#include "main.h"

/**
 * _memset - a function that fills 
 * memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: ret pt to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *st = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (st);
}
