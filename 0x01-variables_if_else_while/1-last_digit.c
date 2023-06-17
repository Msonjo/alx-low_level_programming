#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int n, value;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	value = n % 10;
	/* My code is below */
	if (value > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, value);
	}
	else if (value == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, value);
	}
	else if (value < 6 && value != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, value);
	}

	return (0);
}
