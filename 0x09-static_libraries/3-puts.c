#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: character to be manipulated
 * Return: 0
*/
void _puts(char *s)
{
	int i = 0;

	for (; *s++;)
	{
		_putchar(*(s - 1));
		i++;
	}
	_putchar('\n');
}

