#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to dupplicate
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
	}
	size += 1;
	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	if (s == NULL)
		return (NULL);
	return (s);
}
