#include <stdio.h>
#include <stdlib.h>

/**
 *main - print a-z in reverse order
 *
 *Return: return 0 upon success
 */
int main(void)
{
	char l;
	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');

	return (0);
}
