#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be manipulated
 * Return: 0
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ' || s[i] == '.') && (s[i] == 'a' && s[i] == 'z'))
			s[i + 1] = s[i + 1]  - 32;
	}
	return (s);
}
