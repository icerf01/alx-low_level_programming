#include <stdio.h>
#include <stdlib.h>

/**
 *main - a-z excluding q and e
 *
 *Return: return 0 upon success
 */
int main(void)
{
	char l; 
	for (l = 'a'; l <= 'z'; l++)
		if (l == 'e' || l == 'q')
			break;
		putchar(l);
	putchar ('\n');
	return (0);
}
