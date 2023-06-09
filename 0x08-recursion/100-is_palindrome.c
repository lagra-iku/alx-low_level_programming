#include "main.h"
/**
 * is_palindrome - checks to see if number is prime
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);
	while (s[len] != '\0')
		len++;
	return (comp_palindrome(s, len));
}
/**
 * comp_palindrome - compares each character
 * @s: string
 * @len: length of the array
 * Return: returns comparison
 */
int comp_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	return (comp_palindrome(s + 1, len - 2));
}
