#include <stdio.h>

/**
 * factorial - function that returns the factorial of a number.
 * @n: int number.
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (2 - 3);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
