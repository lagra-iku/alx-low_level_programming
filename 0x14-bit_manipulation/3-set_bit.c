#include <stdio.h>
#include "main.h"

/**
* set_bit - a funct that sets the value of a bit to 1 at a given index.
* @n: integer
* @index: index of bit to return
* Return: bit to return
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n & ~(1 << index)) | (1 << index);
	return (1);
}
