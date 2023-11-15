#include <stdio.h>

/**
 * _pow_recursion - recursive function that returns the power of 2 inputs
 * @x: number
 * @y: power
 * return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
