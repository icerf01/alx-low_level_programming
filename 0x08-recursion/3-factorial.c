#include <stdio.h>

/**
 * factorial- function that returns the factorial of a number
 * @n: int input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial (n - 1));
}
