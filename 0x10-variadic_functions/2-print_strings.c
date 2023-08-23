#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings- print strings
 * @n: number of items
 * @separator: that separates the strings
 * Description: a function that returns returns strings
 * Return: return strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
