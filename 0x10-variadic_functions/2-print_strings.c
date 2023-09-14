#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

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
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
