#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a func that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int sep, i = 0;
	char *str;
	va_list args_list;

	va_start(args_list, format);
	while (format != NULL && format[i] != '\0')
	{
		sep = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args_list, int));
				break;
			case 'i':
				printf("%i", va_arg(args_list, int));
				break;
			case 'f':
				printf("%f", va_arg(args_list, double));
				break;
			case 's':
				str = va_arg(args_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				sep = 1;
				break;
		}
		if (format[i + 1] != '\0' && sep == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args_list);
}
