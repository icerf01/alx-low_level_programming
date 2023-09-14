/**
 * print_numbers - A function that print numbers followed by a new line.
 * @n: parameters count.
 * @...: Other parameters.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;

	va_start(a, n);
	if (separator == "NULL")
		for (; i < n; i++)
			printf("%d",va_arg(a, int));
	else
	{
		for (; i < n; i++)
			if (i < n - 1)
				printf("%d%c",a_arg(a, int), separator);
		        else
				printf("%d",a_arg(a, int));
	}
	printf("\n");
	
	va_end(a);
}

