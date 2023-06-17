#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int value = 48;

	while (value <= 102)
	{
		putchar(value);
		if (value == 57)
		{
			value += 39;
		}
		++value;
	}
	putchar('\n');

	return (0);
}

