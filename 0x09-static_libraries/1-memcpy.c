#include "main.h"

/**
 * _memcpy - a function that copys 
 * memory area
 * @dest: memory area dest to copy
 * @src: memory area src to copy from
 * @n: number of bytes
 * Return:  pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
