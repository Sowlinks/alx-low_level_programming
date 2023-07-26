#include "main.h"
#include <stdio.h>

/**
 * print_array(int *a, int n)- function for printing
 * @a: pointer
 * @n: the number of characters to be printed
 * Return 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%c", a[i]);
		if (i < (n - 1))
			printf(", ");
	printf("\n");
}
