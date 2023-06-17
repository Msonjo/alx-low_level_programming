#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */

int main(void)
{
	int valueOne = 0;
	int valueTwo, valueThree;

	while (valueOne <= 9)
	{
		valueTwo = 0;
		while (valueTwo <= 9)
		{
			valueThree = 0;
			while (valueThree <= 9)
			{
				if (valueOne != valueTwo && valueOne < valueTwo && valueTwo != valueThree
						&& valueTwo < valueThree)
				{
					putchar(valueOne + 48);
					putchar(valueTwo + 48);
					putchar(valueThree + 48);
					if (valueOne + valueTwo + valueThree != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++valueThree;
			}
			++valueTwo;
		}
		++valueOne;
	}
	putchar('\n');

	return (0);
}
