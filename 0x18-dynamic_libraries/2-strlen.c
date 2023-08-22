#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: character
 * Return: 0
*/
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
