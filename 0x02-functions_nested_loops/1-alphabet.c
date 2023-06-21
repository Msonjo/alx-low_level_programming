#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: 0
 * _putchar function
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
