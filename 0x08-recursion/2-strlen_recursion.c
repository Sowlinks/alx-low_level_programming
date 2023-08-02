#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * _strlen- recursion function
 * @s: string to be checked
 * Description: a functiion that returns the legnth of a string
 * Return: 0;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
