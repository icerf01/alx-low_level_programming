#include "main.h"

/**
 * _strdup - A function that returns
 * a pointer to a newly allocated 
 * space in memory. which contains
 * copy of string given as parameter
 * @*str: string given as parameter
 * Return: pointer to *str
 */
char *_strdup(char *str)
{
	char *p;
	char *l = strlen(*str);
	int a = 0;

	p = malloc(sizeof(char) * l);
	while (a < l)
	{
		p[a] == *str[a];
		a++;
	}
	return (p);
}
