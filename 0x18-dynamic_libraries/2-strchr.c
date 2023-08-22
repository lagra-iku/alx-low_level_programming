#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string s
 * @c: character to find
 * Return: 0
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (s + 1);
}
