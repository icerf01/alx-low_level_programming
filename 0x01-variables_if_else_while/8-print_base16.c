#include <stdio.h>
#include <stdlib.h>

/**
 * main - print hexa numbers
 *
 * Return: return 0 upon success
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
		putchar(h);
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar('\n');

	return (0);
}
