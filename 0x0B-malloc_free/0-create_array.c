#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: char input
 * Return: return NULL if size = 0. Return a pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if(size == 0)
		return (NULL);
	if(array == NULL)
		return (NULL);
	while(i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
