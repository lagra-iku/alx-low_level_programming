#include "main.h"
/**
* _isupper - function that checks if the character is capital
* @c: character to be manipulated
* Return: 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
