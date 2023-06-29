#include "main.h"

/**
 * _strcat - function that concat 
 * two strings
 * @dest: stores the final string
 * @src: holds the first string
 * Return: returns a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (tmp);
}
