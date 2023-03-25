#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: no of variable arguments
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args_list;

	va_start(args_list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum +=  va_arg(args_list, int);
	va_end(args_list);
	return (sum);
}
