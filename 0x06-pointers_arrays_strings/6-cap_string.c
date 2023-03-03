#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be manipulated
 * Return: 0
*/
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if ((s[i] == sep[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] = s[i + 1]  - 32;
			if (s[0] && (s[i] >= 'a' && s[i] <= 'z'))
				s[0] = s[0]  - 32;
		}
	}
	return (s);
}
