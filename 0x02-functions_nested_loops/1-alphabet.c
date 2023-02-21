#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * main - prints the alphabet, in lowercase, followed by a new line
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
int main(void)
{
	print_alphabet();
	return (0);
}
