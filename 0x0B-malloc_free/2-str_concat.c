#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0, size;
	char *s_concat;

	/*if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
		*/
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	size = i + j + 1;
	s_concat = malloc(sizeof(char) * size);
	if (s_concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s_concat[k] = s1[i];
		k++;
	}
	for (j = 0; k < size; j++)
	{
		s_concat[k] = s2[j];
		k++;
	}
	return (s_concat);
}
