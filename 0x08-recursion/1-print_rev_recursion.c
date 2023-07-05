#include "main.h"

/**
 * _print_rev_recursion - function to
 * reverse string
 * @s: char pointer input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
