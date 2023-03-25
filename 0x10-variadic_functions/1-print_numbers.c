#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: separator for the numbers
 * @n: no of variable arguments
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(args_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, unsigned int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_list);
}
