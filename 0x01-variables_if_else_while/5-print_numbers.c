#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		++num;
	}
	printf("\n");

	return (0);
}