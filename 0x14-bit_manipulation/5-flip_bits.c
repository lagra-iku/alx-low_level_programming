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
	int i, x, y, count = 0;
	unsigned long int bitSize = (sizeof(unsigned long int) * 8);

	for (i = bitSize - 1; i >= 0; i--)
	{
		x = (n >> i) & 1;
		y = (m >> i) & 1;
		if (x != y)
			count++;
	}
	return (count);
}
