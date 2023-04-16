#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: th number to be printed
 * Return: void
*/
void print_number(int n)
{
	int div = 1;

	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
