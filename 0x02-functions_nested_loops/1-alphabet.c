#include <stdio.h>

/**
 * main - prints a-z using the main.h
 *
 * Return: returns 0 upon success
 */
int main(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++ )
		putchar(l);
	putchar('\n');
	return (0);
}
