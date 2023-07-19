#include "main.h"

/**
 * print_to_98- prints natural number
 * @n: containts the test number
 * Description: prints all natural numbers fro m0 to 98
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		n++;
	}

	while (n > 98)
	{
		n--;
	}
	_putchar('.');
	_putchar(' ');
}
