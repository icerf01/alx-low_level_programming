#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: unsigned size int.
 * Return: pointer to allocated memory or NULL upon failure.
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}

