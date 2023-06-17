#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int valueOne = 0, valueTwo = 0;

	while (valueOne <= 99)
	{
		valueTwo = valueOne;
		while (valueTwo <= 99)
		{
			if (valueTwo != valueOne)
			{
				putchar((valueOne / 10) + '0');
				putchar((valueOne % 10) + '0');
				putchar(' ');
				putchar((valueTwo / 10) + '0');
				putchar((valueTwo % 10) + '0');
				if (valueOne != 99 || valueTwo != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++valueTwo;
		}
		++valueOne;
	}
	putchar('\n');
	return (0);
}
