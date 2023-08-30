#include <stdio.h>
#include <string.h>

/**
 * void _print_rev_recursion - function that prints a string in reverse.
 * @s: string pointer.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int index = len - 1;

	if (*s)
		putchar('\n');
	putchar(*(s + index));
	_print_rev_recursion(s + (index - 1));
}

