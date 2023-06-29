#include "main.h"

/**
 * reverse_array - function that rev
 * content of int array
 * @a: array pointer
 * @n: no of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
