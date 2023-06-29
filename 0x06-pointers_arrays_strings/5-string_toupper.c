#include "main.h"

/**
 * *string_toupper - funct to change
 * all lowercase of a str to upperC
 * @s: pointer input
 * Return: upper char pointer
 */
char *string_toupper(char *s)
{
	char *st = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (st);
}
