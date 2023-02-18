#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lowercase except 'q' and 'e'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char l = 'a';

	do {
		if (l == 'q' || l == 'e')
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	} while (l <= 'z');
	putchar('\n');
	return (0);
}
