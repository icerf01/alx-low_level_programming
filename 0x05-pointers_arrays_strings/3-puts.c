#include "main.h"

/**
 * _puts - function that print a string
 * followed by a new line
 * @str: string input var
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
