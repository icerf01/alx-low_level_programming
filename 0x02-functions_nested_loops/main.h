#include <stdio.h>

int pp(void)
{
	printf("_putchar\n");
	return (0);
}

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++ )
		putchar(l);
	putchar('\n');
	return (0);
}
