#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: character to be manipulated
 * Return: 0
*/
void puts_half(char *str)
{
	int i, j, len;

	while (str[i] != '\0')
		i++;
	len = i / 2;
	for (j = i / 2; j <= len * 2; j++)
	{
		if (i % 2 == 0)
			_putchar(str[j]);
		else
			_putchar(str[j + 1]);
	}
	_putchar('\n');
}

