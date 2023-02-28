#include "main.h"
/**
 * rev_string -  a function that reverses a string
 * @s: character to be manipulated
 * Return: 0
*/
void rev_string(char *s)
{
	int i = 0;
	int j, k;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	for (k = 0; k < i / 2; k++)
	{
		temp = s[k];
		s[k] = s[j];
		s[j--] = temp;
	}
}

