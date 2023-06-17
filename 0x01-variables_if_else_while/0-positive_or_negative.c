#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: Always 0
 * DESCRIPTION: print value of n status: positive, zero, negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code is below */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
