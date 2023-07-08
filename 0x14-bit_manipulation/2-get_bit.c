#include <stdio.h>
#include "main.h"

/**
* get_bit - a funct that returns the value of a bit at a given index
* @n: integer
* @index: index of bit to return
* Return: bit to return
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
