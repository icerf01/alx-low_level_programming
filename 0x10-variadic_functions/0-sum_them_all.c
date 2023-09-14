#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all it parameters.
 * @n: first parameter.
 * Return - int sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	int value;
	va_list(args);
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i; i < n; i++)
	{
		value = va_args(args, int);
		result += value;
	}
	va_end(args);

	return (result);
}
