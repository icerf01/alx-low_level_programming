#include "main.h"

/**
 * *create_array - function that 
 * creates array of char and 
 * initializes with specific char
 *@size: size of memory
 *@c: specific char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a = 0;

	p = malloc(sizeof(char) * size);

	if(size == 0)
		return (NULL);
	if(p == NULL)
		return (NULL);
	while(a < size)
	{
		p[i] = c;
		a++;
	}
	return (p);
}
