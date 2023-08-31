#include "main.h"

/**
 * _pow_recursion- power function
 * @x: number to be raised
 * @y: power to be raised to
 * Description: a function that returns the value of x raised to the power of y
 * Return: return the power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
