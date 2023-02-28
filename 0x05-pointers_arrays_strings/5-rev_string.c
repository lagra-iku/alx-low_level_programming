#include "main.h"
/**
 * rev_string -  a function that reverses a string
 * @s: character to be manipulated
 * Return: 0
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

