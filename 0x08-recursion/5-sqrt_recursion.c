#include "main.h"

int new(int, int);
/**
 *_sqrt_recursion -> sqrt using recursion
 *@n: parameter to be sqrt
 *Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (new(n, 1));
}

/**
 *new -> recursive square root
 **@n: number
 *@i: iterator
 *Return: a number
 */

int new(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (new(n, i + 1));
}
