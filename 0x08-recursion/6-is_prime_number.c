#include "main.h"
/**
 * _find_prime - checks to see if number is prime
 * @n: no to check
 * @a: base value to compare
 * Return: int prime or not
 */
int _find_prime(int n, int a)
{
	if (n < 2 || n % a == 0)
		return (0);
	else if (a > n / 2)
		return (1);
	else
		return (_find_prime(n, a + 1));
}

/**
 * is_prime_number - determine if number is prime
 * @n: no to check
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_find_prime(n, 2));
}
