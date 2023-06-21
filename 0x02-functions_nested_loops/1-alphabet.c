#include "main.h"

/**
 * print_alphabet - prints a-z using function already defined in main.h
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
}
