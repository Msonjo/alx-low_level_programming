#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	char *stc = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, stc, 58);
	write(2, "\n", 1);
	return (1);
}
