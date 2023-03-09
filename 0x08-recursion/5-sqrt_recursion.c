#include "main.h"
/**
 * _sqr_a - returns the square of a base number.
 * @a: base number
 * @n: no to find square root
 * Return: square root
*/
int _sqr_a(int a, int n)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (_sqr_a(a + 1, n));
}
/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: number to find the natural square root.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (_sqr_a(1, n));
}

