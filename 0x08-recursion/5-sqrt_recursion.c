#include "main.h"

/**
 * _sqrt_recursion- square rooot function
 * @n: member n
 * Description: a function to return the natural square root of a number
 * Return: returns square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- performs the square root
 * @n: number
 * @x: iterative member
 * Return: retun the square root
 */

int _sqrt(int n, int x)
{
	int square = x * x;

	if (square == n)
	{
		return (x);
	}
	if (square > n)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}
