#include <stdio.h>

/**
 * main - function that prints no 
 * of arguments
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
