#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * _print_rev_recursion- recursion function
 * @s: string to be printed
 * Description: a function that prints a string
 * Return: 0;
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
