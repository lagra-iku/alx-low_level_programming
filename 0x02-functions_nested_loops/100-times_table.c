#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number that should display it's multiplication table
 * Return: always 0 (success)
 */
void print_times_table(int n)
{
	int i, j, m;

	if ((n > 0) && (n < 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (m >= n)
				{
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m < n && j != 0)
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
}
