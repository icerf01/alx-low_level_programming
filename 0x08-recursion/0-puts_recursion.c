#include <stdio.h>

/**
 * _puts_recursion-function to print a string then new line
 * @s: string input
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
