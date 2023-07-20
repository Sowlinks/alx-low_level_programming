#include "main.h"

/**
 * more_numbers- print 0 - 14
 * Decription: a function that prints
 * from 0 to 14 ten times
 * Return: (0)
 */

void more_numbers(void)
{
	int n, m;

	for (m = 0; m <= 10; m++)
	{
		for (n = 0; n < 14; n++)
		{
			if (m > 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
