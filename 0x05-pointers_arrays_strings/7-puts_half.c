#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: character to be manipulated
 * Return: 0
*/
void puts_half(char *str)
{
	int i = 0;
	int j, len;

	while (str[i] != '\0')
		i++;
	len = i + 1;
	j = len / 2;
	if (len % 2 != 0)
	{
		len = len - 1;
		for (j; j < len; j++)
			_putchar(str[j + 1]);
	} else
	{
		for (j; j < len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}

