#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return:return the largest number
 */
int largest_number(int x, int y, int z)
{
	int lg;

	if (x >= y && x >= z)
	{
		lg = x;
	}
	else if (y >= x && y >= z)
	{
		lg = y;
	}
	else if (z >= x && z >= y)
	{
		lg = z;
	}

	return (lg);
}
