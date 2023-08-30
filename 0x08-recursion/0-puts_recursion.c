#include "main.h"

/**
 * _puts_recursion- function to print a string
 * @s: string
 * Description: a function that prints a string given to it
 * Return: returns the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
