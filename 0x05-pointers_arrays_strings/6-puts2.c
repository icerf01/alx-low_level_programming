#include "main.h"

/**
 * puts2 - function that prints every other 
 * char of a str, starting with first char
 * then new line
 * @str: pointer input
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	len--;
	for (; i <= len; i += 2)
		putchar(str[i]);

	putchar('\n');
}
