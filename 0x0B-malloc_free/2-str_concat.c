#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: if void, treat as empty string. return str pointer. on err return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a ,b ,c ,d;

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	c = a + b + 1;
	
	s3 = (char *) malloc(sizeof(char) * c);
	
	if (NULL)
		return (NULL);
	for (d = 0; d < a; d++)
		s3[d] = a;
	for (d; d < c; d++)
		s3[d] = a;
	return (s3);
}
