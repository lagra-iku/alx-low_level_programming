#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: character
 * Return: 0
*/
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
/**
 * is_palindrome - a func thatecks for a palindrome
 * @s: character
 * Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
