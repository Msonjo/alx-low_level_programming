#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * return: 1
 */
int main(void)
{
	char *sentence = "and that piece of art is useful\" - Dora Korpar,
			2015-10-19";

	write(2,sentence, 49);
	write(2, "\n", 1);
	return (1);
}
