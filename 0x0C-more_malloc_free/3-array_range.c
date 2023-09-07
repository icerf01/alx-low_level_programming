#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 * Return: pointer to newly created array, else NULL.
 */
int *array_range(int min, int max)
{
	int *new_array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		new_array[i] = min++;

	return (new_array);
}
