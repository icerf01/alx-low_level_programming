#include "main.h"

/**
 * print_numbers - funct that print numbers,
 * 0-9
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
