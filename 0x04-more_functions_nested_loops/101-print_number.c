#include <stdio.h>
#include "main.h"

/*
 * print_number - use _putchar to print a number
 * @n: number to be printes
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n/10)
		print_number(n/10);
	_putchar(n%10 + '0');
}
