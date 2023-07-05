#include "main.h"

/**
 * factorial - function that returns
 * the fctorial of a given number
 * @n: number n
 * Return: factotial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
