#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all it parameters.
 * @n: specifies arguments count.
 * @...: other parameters.
 * Return - int sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	va_list a;

	if (n == 0)
		return (0);

	va_start(a, n);
	for (i; i < n; i++)
	{
		result += va_arg(a, int);
	}
	
	va_end(a);
	return (result);
}
