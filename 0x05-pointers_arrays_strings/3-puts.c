#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character to be manipulated
 * Return: 0
*/
void _puts(char *str)
{
	int i = 0;

	_putchar(*str);
	for (; *str++;)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}

