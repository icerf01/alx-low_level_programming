#include "main.h"

/**
 * fizz_buzz - print 1-100 replacing x3 with
 * fizz and x5 with buzz
 */
void fizz_buzz(void)
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
}
