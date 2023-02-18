#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combs of single-digit numbers followed by comma
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
