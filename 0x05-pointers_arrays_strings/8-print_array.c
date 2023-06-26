#include "main.h"

/**
 * print_array - print n elemets of array of
 * int, followed by \n
 * @a: array pointer
 * @n: no of array elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
