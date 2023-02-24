#include "main.h"
/**
 * print_square - print square
 * @size: number of times to print
 * Return: 0
*/
void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < 2; i++)
			_putchar('#');
		_putchar('\n');
	}
}

