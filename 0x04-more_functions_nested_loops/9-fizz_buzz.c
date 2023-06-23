#include "main.h"
#include <stdio.h>

/**
 * main - print 1-100 replacing x3 with
 * fizz and x5 with buzz
 * Return: return 0
 */
int main(void)
{
	int i = 1;

	for(; i <= 100; i++)
	{
		if (i%3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ",i);
	}

	return (0);
}
