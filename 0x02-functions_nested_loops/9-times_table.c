#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: always 0 (success)
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (j != 9)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else if (m < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((m % 10) + '0');
			}
			else
				_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
