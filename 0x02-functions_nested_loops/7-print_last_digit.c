#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to be checked
 * Return: always 0 (success)
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar('0' + r);
	return (r);
}
