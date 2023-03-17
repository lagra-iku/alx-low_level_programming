#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: input1
 * @s2: input2
 * @n: number of bytes for s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n < j)
		j = n;
	j += i;
	arr = malloc(sizeof(char *) * (j + 1));
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		arr[k] = s1[k];
	for (l = 0; l < j; l++)
	{
		arr[k] = s2[l];
		k++;
	}
	k++;
	arr[k] = '\0';
	return (arr);
}
