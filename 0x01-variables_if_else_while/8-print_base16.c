#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char l = 'a';
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n <= 9)
		{
			putchar(48 + n);
		} else
		{
			putchar(l);
			l++;
		}
	}
	putchar('\n');
	return (0);
}
