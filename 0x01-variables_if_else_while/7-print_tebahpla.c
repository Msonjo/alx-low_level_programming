#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'z')
	{
		putchar(c);
		--c;
	}
	putchar('\n');

	return (0);
}
