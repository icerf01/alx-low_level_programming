#include <stdio.h>
#include <stdlib.h>

/**
 * main - print char 0-9
 *
 * Return: return char 0-9
 */
int main(void)
{
	int a;

	for (a = '1'; a < '10'; a++)
		putchar (a);
	putchar('\n');

	return (0);
}
