#include <stdio.h>

/**
 *_strlen_recursion - function that returnd the length of a string.
 *@s: string pointer.
 *Return: string length.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	else
	{
		len++;
		_strlen_recursion(s + 1);
		return (len);
	}
}
