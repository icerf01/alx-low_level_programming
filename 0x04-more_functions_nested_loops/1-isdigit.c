#include <main.h>

/**
 * _isdigit - this function checks if input
 * is a digit (0-9)
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
