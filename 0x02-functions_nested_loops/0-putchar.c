#include <unistd.h>
/**
 * main - main block
 * Return: always 0
 */
int main(void)
{
	char message[] = "_putchar";
	int i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
