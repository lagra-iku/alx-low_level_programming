#include "main.h"
/**
 * reset_to_98 - take a pointer to an int as parameter and updates the value
 * @n: Pointer to be replicated
 * Return: 0
*/
void reset_to_98(int *n)
{
	*n = 98;
	_putchar(n + '0');
	_putchar('\n');
}
