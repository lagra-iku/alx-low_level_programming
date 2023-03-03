#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be manipulated
 * Return: 0
*/
char *rot13(char *s)
{
	int i, j;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (s[i] == alp[j])
				s[i] = rot[j];
		}
	}
	return (s);
}
