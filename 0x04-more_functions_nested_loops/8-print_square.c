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

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
