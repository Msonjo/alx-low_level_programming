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
			if (valueTwo != valueOne)
			{
				putchar((valueOne / 10) + 48);
				putchar((valueOne % 10) + 48);
				putchar(' ');
				putchar((valueTwo / 10) + 48);
				putchar((valueTwo % 10) + 48);
			}
			else if (valueOne != 98 || valueTwo != 99)
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
