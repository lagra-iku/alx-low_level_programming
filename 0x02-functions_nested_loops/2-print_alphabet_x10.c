#include "main.h"
/**
 * print_alphabet_x10 - prints 10 X the alphabet, in lowercase, followed \n.
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}
