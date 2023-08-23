#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers- print numbers
 * @n: number of items
 * @separator: that sereates the numbers
 * Description: a function that returns a set of numbers
 * Return: return sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d ", va_arg(numbers, int));
	}
	if (i < n && separator != NULL)
	{
		printf("%s", separator);
	}

	printf("\n");
	va_end(numbers);
}
