#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be manipulated
 * Return: 0
*/
char *leet(char *s)
{
	int i, j;
	char toRep[] = "aAeEoOtTlL";
	char repBy[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; toRep[j] != '\0'; j++)
		{
			if (s[i] == toRep[j])
				s[i] = repBy[j];
		}
	}
	return (s);
}
