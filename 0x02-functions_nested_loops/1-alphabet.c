#include "main.h"

/**
 * main - prints a-z using the main.h
 *
 * Return: returns 0 upon success
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
}
