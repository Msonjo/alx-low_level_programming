#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	/* Prints in lower case */
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}

	/* Prints in upper case */
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}
	putchar('\n');

	return (0);
}
