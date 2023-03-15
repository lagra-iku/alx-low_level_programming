#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars using c
 * @size: size of array
 * @c: character to initialize
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrC;

	arrC = malloc(sizeof(char) * size);
	if (size == 0 || arrC == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arrC[i] = c;
	return (arrC);
}
