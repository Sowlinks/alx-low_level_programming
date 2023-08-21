#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all- sums all parameters
* @n: number of items
* Description: a function that returns the sum of all its paramaeters
* Return: return sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, x = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int n = va_arg(args, int);

		x += n;
	}
	va_end(args);
	return (x);
}
