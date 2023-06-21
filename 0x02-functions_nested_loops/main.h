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
}

void print_alphabet_x10(void)
{
	char l10;
	char a;

	for (a = 0; a < 10; a++ )
	{
		for (l10 = 'a'; l10 <= 'z'; l10++ )
			putchar(l10);
		putchar('\n');
	}
}
