#include <stdio.h>
#include "main.h"

/**
* clear_bit - a func that sets the value of a bit to 0 at a given index.
* @n: integer
* @index: index of bit to return
* Return: 1 if successful else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n & ~(1 << index)) | (0 << index);
	return (1);
}
