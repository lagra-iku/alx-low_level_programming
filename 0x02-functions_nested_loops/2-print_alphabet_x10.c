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

	c = 'a';
	while (i < 11)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}

}
