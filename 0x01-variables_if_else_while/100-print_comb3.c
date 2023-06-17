#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int valueOne = 0, valueTwo;

	while (valueOne <= 9)
	{
		valueTwo = 0;
		while (valueTwo <= 9)
		{
			if (valueOne != valueTwo && valueOne < valueTwo)
			{
				putchar(valueOne + 48);
				putchar(valueTwo + 48);
				if (valueOne + valueTwo != 17)
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
