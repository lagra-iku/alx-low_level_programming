#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
