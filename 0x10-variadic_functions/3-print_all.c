#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints a list of varied types of arguments.
 * @format: A format string containing the types of arguments to be printed.
 *          Supported types: 'c' (char), 'i' (int), 'f' (float), 's' (string)
 *          Any other character is ignored.
 *          The function stops processing arguments when format string ends.
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *str_arg, *separator = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str_arg = va_arg(args, char *);
					if (!str_arg)
						str_arg = "(nil)";
					printf("%s%s", separator, str_arg);
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(args);
}

