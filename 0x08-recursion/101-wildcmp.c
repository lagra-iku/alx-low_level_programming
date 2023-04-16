#include <stdio.h>
#include "main.h"

/**
 * wildcmp - a func that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		while (*s2 == '*')
			s2++;
		if (*s2 == '\0')
			return (1);
		while (*s1 != '\0')
		{
			if (*s1 == *s2)
			{
				if (wildcmp(s1 + 1, s2 + 1))
					return (1);
			}
			s1++;
		}
		return (0);
	}
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
