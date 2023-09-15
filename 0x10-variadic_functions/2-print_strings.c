#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - sums all args
 * @separator: the string to be passed between numbers
 * @n: number of integers passed to the function
 * @...: all other args
 * Description: a function that prints strings, followed by a new line.
 * Return: returns strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
