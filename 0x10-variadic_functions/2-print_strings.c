#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: separator for the numbers
 * @n: no of variable arguments
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(args_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args_list, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_list);
}
