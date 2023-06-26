#include "main.h"

/**
 * swap_int - funct to swap value
 * @a: input pointer (int)
 * @b: input pointer (int)
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	swp = *a;
	*a = *b;
	*b = swp;
}
