#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int value = 0;

	while (value < 10)
	{
		putchar(value + '0');
		++value;
	}
	putchar('\n');

	return (0);
}
