#include <stdio.h>

/**
 * _pow_recursion - function that returns x raised to the power of y.
 * @x: int number.
 * @y: power.
 * Return: x raised to power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (1 - 2);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
