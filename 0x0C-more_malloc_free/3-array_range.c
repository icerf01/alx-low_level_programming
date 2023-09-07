#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 * Return: pointer to newly created array, else NULL.
 */
int *array_range(int min, int max)
{
	int *point;
	
	if (min > max)
	    return (NULL);
	    
	int e = (max - min) + 1;
	point = malloc(e * sizeof(int));
	
	if (point == NULL)
	{
	    return (NULL);
	}
	
	int f = 0;
	
	while ( f < e)
	{
	    point[f] = f + min;
	    f++;
	}
	return (point);
	
}
