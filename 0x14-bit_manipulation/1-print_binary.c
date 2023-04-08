#include <stdio.h>
#include "main.h"

/**
* print_binary - a funct that prints the binary representation of a no
* @n: number to print
* Return: 0
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
