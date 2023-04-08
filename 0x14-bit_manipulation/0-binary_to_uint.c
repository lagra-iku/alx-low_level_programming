#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a func that converts a binary number to an unsigned int
* @b: string of binary number
* Return: int of binary no
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		num += b[i] - '0';
	}
	return (num);
}
