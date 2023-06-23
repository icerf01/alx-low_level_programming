#include "main.h"

/**
 * print_triangle - A  function that prints
 * a triangle, followed by a new line.
 * @size: integer input
 * Return: return void
 */
void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
