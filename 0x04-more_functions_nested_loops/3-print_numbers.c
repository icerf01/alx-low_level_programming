#include "main.h"

/**
 * print_numbers - prints 0-9 \n
 * @a: enumerates 0-9
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar("\n");
}
