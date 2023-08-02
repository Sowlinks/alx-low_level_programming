#include "main.h"

/**
 * _puts_recursion- recursion function
 * @s: string to be printed
 * Description: a function that prints a string
 * Return: 0;
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
