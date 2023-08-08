#include "main.h"

/**
 * _pow_recursion- raise x to the power of y
 * @x: number to be raised
 * @y: the power
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		for (i = 0; i < y - 2; i++)
		{
			x *= x;
			return (x);
		}
	return (1);
}
