#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: no of variable arguments
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args_list, n);
	for (i = 0; i < n; i++)
		sum +=  va_arg(args_list, unsigned int);
	va_end(args_list);
	return (sum);
}
