#include "main.h"

/**
 * _strlen - get the length of string
 * @s: user input (pointer)
 * Return: return @len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
