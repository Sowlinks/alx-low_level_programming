#include "main.h"

/**
 * swap_int(int *a, int *b)- swap two numbers
 * @a: variable a
 * @b: variable b
 * Description: a function that swaps two integers
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
