#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int value = 0;

	while (value <= 9)
	{
		putchar(value + 48);
		if (value != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++value;
	}
	putchar('\n');

	return (0);
}
