#include <stdio.h>
#include "main.h"

/**
 * print_times_table- function for times table
 * @n: number n
 * Description: a function that prints the times table
 * Return: 0
 */
void print_times_table(int n)
{
	int i, k, total;

	for (i = 0; i <= n; i++)
	{
		for (k = 0; k <= n; k++)
		{
			total = i * k;

			if (total != 0)
			{
				printf(", ");
			}
			if (total > 9)
			{
				printf("%d", total);
			}
			else if (i == 0 && k > 0 && k <= n)
			{
				printf(",  %d", total);
			}
			else if (total  < 10 && total != 0)
			{
				printf(" %d", total);
			}
			else
			{
				printf("%d", total);
			}

		}
		printf("\n");
	}
}
