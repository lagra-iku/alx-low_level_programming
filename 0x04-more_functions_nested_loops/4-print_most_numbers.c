#include "main.h"
/**
* print_most_numbers - print numbers 0 to 9 except 2 and 4
* Return: 0
*/
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
