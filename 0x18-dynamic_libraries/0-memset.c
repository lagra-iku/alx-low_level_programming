#include "main.h"
/**
 * _memset - copies memory area
 * @s: destination
 * @b: source
 * @n: no of times to be manipulated
 * Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
