#include <stdio.h>

/**
 * _puts_recursion - a function that displays a string followed by a new line.
 * @s: string input.
 * Return: newline at string end
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\n');
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
