#include "main.h"

/**
 * _strcpy - function that copies string
 * @dest: destination
 * @src: source
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *swp = dest;

	while (*src)
		*dest++ = *src++;
	return (swp);
}
