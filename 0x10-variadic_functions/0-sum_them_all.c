#include <stdarg.h>

/**
 * sum_them_all - sums all args
 * @n: number of args
 * @...: all other args
 * Description: a function that returns the sum of all its parameters.
 * Return: returns sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
