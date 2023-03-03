#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be manipulated
 * Return: 0
*/
char *leet(char *s)
{
	int i, j;
	char toRep[] = "aeotl";
	int repBy[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; toRep[j] != '\0'; j++)
		{
			if (s[i] == toRep[j] || s[i] == toRep[j - 32])
				s[i] = repBy[j];
		}
	}
	return (s);
}
