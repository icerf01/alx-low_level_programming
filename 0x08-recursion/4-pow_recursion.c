#include "main.h"

/**
 * _pow_recursion - function to calc
 * x ^ y
 * @x: no
 * @y: no power
 * Return: -1 if if y < 0, else x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x * x);
	return (x *= _pow_recursion(x, y-1);
}
