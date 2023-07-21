#include "main.h"

/**
 * print_square- prints square
 * @size: var containing square
 * Description: a function that prints a square
 * Return: 0
 */
void print_square(int size)
{
	int n, m;

	for (n  = size - 1; n > 0; n--)
	{
		for (m = 1; m < size; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
