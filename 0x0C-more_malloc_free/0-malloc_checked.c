#include "main.h"

/**
 * malloc_checked - A function that 
 * allocates memory using malloc.
 * @b: unsigned int input
 * Return: pointer to memory else 98
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
