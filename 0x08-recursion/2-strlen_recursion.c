#include "main.h"

/**
 * _strlen_recursion - function to
 * get string length
 * @s: char pointer
 * Return: return int str length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
