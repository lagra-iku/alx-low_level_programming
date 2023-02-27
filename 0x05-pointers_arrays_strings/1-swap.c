#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: number 1
 * @b: number 2
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}

