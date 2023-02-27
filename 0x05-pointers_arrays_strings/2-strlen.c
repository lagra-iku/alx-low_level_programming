#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: character
 * Return: 0
*/
int _strlen(char *s)
{
	int i;

	for (; *s++;)
		i++;
	return (i);
}
