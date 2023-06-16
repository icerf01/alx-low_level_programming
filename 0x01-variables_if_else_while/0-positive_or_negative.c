#include <stdlib.h>
#include <time.h>

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
		printf("%d is positive\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	
	return (0);
}
