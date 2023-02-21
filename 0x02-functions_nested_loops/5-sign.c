#include "main.h"
/**
 * print_sign - hecks for alphabetic character.
 * @n: number to be checked
 * Return: always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	elseif(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	{
		_putchar('0');
		return (0);
	}
}
