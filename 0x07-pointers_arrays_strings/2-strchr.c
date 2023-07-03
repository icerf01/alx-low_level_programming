#include "main.h"

/**
 * _strchr - a function that locates 
 * a character in a string.
 * @s: an input string to search in
 * @c: an input char to
 * locate into string s
 * Return: returns pnt to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
