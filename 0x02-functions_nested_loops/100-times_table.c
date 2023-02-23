#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number to output its multiplication table
 * Return: always 0 (success)
 */
void print_times_table(int n)
{
	int i, j;

	if ((n > 15) || (n < 0))
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar((j * i) + '0')
			}
		}
		_putchar('\n');
	}
}
