#include "main.h"

/**
 * _memcpy - a function 
 * that copys memory area
 * @dest: memory area dest to copy
 * @src: memory area src to copy from
 * @n: number of bytes
 * Return: returns pt to cpy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *st = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (st);
}
