#include <stdio.h>

/**
 * _atoi - a funct that converts str to int
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int t = 0;
	char n_f = 0;

	while (*s)
	{
		if (*s == '-')
			x *= -1;

		if (*s >= '0' && *s <= '9')
		{
			n_f = 1;
			t = t * 10 + *s - '0';
		}

		else if (n_f)
			break;
		s++;
	}

	if (sign < 0)
		t = (-t);

	return (t);
}
