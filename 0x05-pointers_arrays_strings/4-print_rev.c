#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: character to be manipulated
 * Return: 0
*/
void print_rev(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	for (; i >= 0; i--)
	{
		_putchar(*s);
		*s--;
	}
	_putchar('\n');
}

