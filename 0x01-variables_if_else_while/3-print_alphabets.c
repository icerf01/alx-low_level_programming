#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a-z A-Z
 *
 * Return: return 0 upon success
 */

int main(void)
{
	char l,u;
	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar("\n");

	return(0);
}
