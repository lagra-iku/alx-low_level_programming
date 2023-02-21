#include <stdio.h>
/**
 * main - a program that prints _putchar, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		putchar(*c++);
	}
	putchar('\n');
	return (0);
}
