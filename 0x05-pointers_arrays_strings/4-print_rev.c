#include "main.h"
#include <stdio.h>

/**
 * print_rev- print string in reverse
 * @s: variable s
 * Return reverse string
 */

void print_rev(char *s)
{
	int index, i;

	while (s[index] != '\0')
		index++;
		for (i = index - 1; i >= 0; i--)
		printf("%c", s[index]);
}
