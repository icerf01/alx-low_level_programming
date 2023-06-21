#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times on seperate lines
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	char l;
	char a;

	for (a = 0; a < 10; a++)
	{
		for (l = 'a'; l <= 'z'; l++)
			putchar(l);

		putchar('\n');
	}
}
