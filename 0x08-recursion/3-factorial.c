#include "main.h"

/**
 * factorial- factorial function
 * @n: member n
 * Description: a function that returns the factorial of a given number
 * Return: returns the factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n  < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
