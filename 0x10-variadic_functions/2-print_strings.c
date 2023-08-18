#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints an array of strings, followed by a new line.
 * @separator: The delimiter between strings, or NULL if no delimiter.
 * @n: The number of strings to print.
 * @...: The strings to be printed.
 *
 * Description: Prints each given string followed by the separator,
 *              and terminates with a newline character.
 *              If a string is NULL, "(null)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	char *str;
	unsigned int index;

	va_start(args_list, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(args_list, char *);

		if (str == NULL)
			printf("(null)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args_list);
}
