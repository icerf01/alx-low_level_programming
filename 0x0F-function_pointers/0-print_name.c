#include "main.h"
#include <stdlib.h>

/**
 * print_name - A function that 
 * prints a name.
 * @name: pointer to name to print
 * @f:pontr 2 function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f = &printname;
	return (name);
}
