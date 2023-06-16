#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a-z A-Z
 *
 * Return: return 0 upon success
 */

int main(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l  <= 'Z'; l++)
		putchar(l);
	putchar('\n');

	return(0);
}
