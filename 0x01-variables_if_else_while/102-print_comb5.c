#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int valueOne = 0, valueTwo;

	while (valueOne <= 99)
	{
		valueTwo = valueOne;
		while (valueTwo <= 99)
		{
			putchar((valueOne / 10) + 48);
			putchar((valueOne % 10) + 48);
			putchar(' ');
			putchar((valueTwo / 10) + 48);
			putchar((valueTwo % 10) + 48);
			if (valueOne != 99 || valueTwo != 99)
			{
				putchar(',');
				putchar(' ');
			}
			++valueTwo;
		}
		++valueOne;
	}
	putchar('\n');
	return (0);
}
