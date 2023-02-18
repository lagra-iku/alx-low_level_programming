#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
