#include "main.h"

/**
 * _calloc - function that allocates
 * memory for an array, using malloc.
 * @nmemb: members of array
 * @size: array size.
 * Return: NULL on fail else pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
