#include <stdio.h>

/**
 * _print_rev_recursion- function that prints a string in reverse
 * @s: string input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		print_rev_recursion(s + 1);
		putchar(*s);
	}
}
