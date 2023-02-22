#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to be checked
 * Return: always 0 (success)
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (0);
}
