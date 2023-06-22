#include "main.h"

/**
 * _isdigit - funct checks if input is digit
 *
 * Return: return 0 if postive, else ret 1
 */
int _isdigit(int c)
{
	int a;
	int b = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if ((int) c == a)
			b = 1;
	}
	return (b);
}
