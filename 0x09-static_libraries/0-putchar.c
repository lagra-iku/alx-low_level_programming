#include "main.h"
/**
 * main - a program that prints _putchar, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch++);
	}
	_putchar('\n');
	return (0);
}

