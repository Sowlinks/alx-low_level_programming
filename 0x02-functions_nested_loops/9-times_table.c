#include <stdio.h>
#include "main.h"

/**
 * times_table- function for times table
 * Description: a function that prints the times table
 * Return: 0
 */
void times_table(void)
{
	int i, n, total;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			total = i * n;

			if (total != 0)
			{
				printf(", ");
			}
			if (total > 9)
			{
				printf("%d", total);
			}
			else if (i == 0 && i < 9)
			{
				printf("%d, ", total);
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
