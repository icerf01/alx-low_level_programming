#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer input
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		putchar(s[--len]);

	putchar('\n');
}
