#include "main.h"
#include <stdio.h>

/**
 * rev_string- reverses a string
 * @s: variable s
 * Return reverse string
 */

void rev_string(char *s)
{
	int index, i;

	while (s[index] != '\0')
		index++;
		for (i = index - 1; i >= 0; i--)
			printf("%c", s[index]);
	printf("\n");
}
