#include "main.h"

/**
 * *_strcat - function that concat 
 * two strings
 * @dest: stores the final string
 * @src: holds the first string
 * Return: returns a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	*dest += *src + '\0';

	return (*dest);
}
