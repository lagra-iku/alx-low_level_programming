#include <stdio.h>
#include "main.h"

/**
* flip_bits - a func to get from one number to another
* @n: No to flip
* @m: No to flip to
* Return: the number of bits you would need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		x &= (x - 1);
		i++;
	}
	return (i);
}
