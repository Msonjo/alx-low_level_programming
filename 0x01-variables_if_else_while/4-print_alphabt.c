#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			++c;
		}
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
