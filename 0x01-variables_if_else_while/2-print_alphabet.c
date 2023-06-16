#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lower a-z
 *
 * Return: returns 0 upon success
 */

int main(void)
{
	char l;

	for (l = 'a'; l  <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
