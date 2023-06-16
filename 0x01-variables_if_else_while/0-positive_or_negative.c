#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that prints stored number
 *
 * Return : returns 0 upon success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%Lf is positive\n",n);
	}
	else
	{
		printf("%Lf is negative\n",n);
	}
	
	return (0);
}
