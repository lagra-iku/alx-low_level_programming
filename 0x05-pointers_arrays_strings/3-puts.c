#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character to be manipulated
 * Return: 0
*/
void _puts(char *str)
{
	int i = 0;

	for (;)
	{
		_putchar(*str);
		*str++;
		i++;
	}
	_putchar('\n');
}

