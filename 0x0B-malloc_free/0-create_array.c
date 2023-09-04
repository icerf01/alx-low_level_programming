#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars.
 * @size: size of array
 * @c: char input
 * Return: return NULL upon error or void, else pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
