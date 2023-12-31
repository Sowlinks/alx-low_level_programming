#include "main.h"

/**
 * _print_rev_recursion(char *s)- function to print a string in reverse
 * @s: string
 * Description: a function that prints a string given to it in reverse
 * Return: returns the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
