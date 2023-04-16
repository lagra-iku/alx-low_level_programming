#include <stdio.h>
#include "dog.h"
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
/**
 * *_strcpy -  copy string pointed by src to dest
 * @dest: destination
 * @src: source
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
