#include "main.h"
#include <stdio.h>

/**
 * print_rev- print a string in reverse
 * @s: variable s
 * Return reverse string
 */

void print_rev(char *s)
{
	int index = 0;
	int i;

	while (s[index] != '\0')
		index++;
	for (i = index; i >= 0; i--)
		printf("%c", s[i-1]);
	printf("\n");

}
