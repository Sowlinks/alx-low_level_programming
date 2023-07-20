#include "main.h"

/**
 * print_numbers- print 0 - 9
 * Decription: a function that prints
 * from 0 to 9
 * Return: (0)
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
