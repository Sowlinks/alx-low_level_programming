#include "main.h"

/**
 * print_square- prints square
 * @size: var containing square
 * Description: a function that prints a square
 * Return: 0
 */
void print_square(int size)
{
	int n;

	for (n  = 1; n < size; n++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
