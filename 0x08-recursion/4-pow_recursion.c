#include "main.h"

/**
 * _pow_recursion- raise x to the power of y
 * @x: number to be raised
 * @y: the power
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		x *= x;
		y--;
		return (x);
	}
	return (1);
}
