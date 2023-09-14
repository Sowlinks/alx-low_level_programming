#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - sums all args
 * @separator: the string to be passed between numbers
 * @n: number of integers passed to the function
 * @...: all other args
 * Description: a function that returns the sum of all its parameters.
 * Return: returns num
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
