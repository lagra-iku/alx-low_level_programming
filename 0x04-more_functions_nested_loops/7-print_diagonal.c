#include "main.h"
/**
* print_diagonal - a function that draws a diagonal line on the terminal.
* @n: no of times to print \
* Return: 0
*/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
