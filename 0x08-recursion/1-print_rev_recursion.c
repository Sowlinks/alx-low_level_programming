#include "main.h"

/**
 * void _print_rev_recursion(char *s)- function to print a string in reverse
 * @s: string
 * Description: a function that prints a string given to it in reverse
 * Return: returns the string
 */

void _print_rev_recursion(char *s)
{
	char str;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(str);
}
