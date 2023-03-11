#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: character to be tested
 * Return: always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
