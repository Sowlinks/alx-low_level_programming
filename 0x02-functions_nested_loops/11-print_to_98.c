#include <stdio.h>
#include "main.h"

/**
 * print_to_98- prints natural number
 * @n: containts the test number
 * Description: prints all natural numbers fro m0 to 98
 * Return: 0
 */

void print_to_98(int n)
{
	int m;

	if (n > 98)
	{
		for (m = n; m > 98; m--)
		{
			printf("%d, ", m);
		}
	}
	else
	{
		for (m = n; m < 98; m++)
		{
			printf("%d, ", m);
		}
	}
	printf("%d", 98);
}
