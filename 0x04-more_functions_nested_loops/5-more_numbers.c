#include "main.h"

/**
 * more_numbers - a function that prints,
 * 0-14 and return a new line 10 times
 * Return: returns 0
 */
void more_numbers(void)
{
	int i,j = 0;

	for ( i <= 9; i++)
	{
		for (; j <= 14; j++)
			putchar(j);
		putchar("\n");
	}

	return (0);
