#include "main.h"
#include <stdio.h>

/**
 * print_rev- print a string in reverse
 * @s: variable s
 * Return reverse string
 */

void print_rev(char *s)
{
	char str[] = "Hello world";
	int index = 0;
	int i;

	while (str[index] != '\0')
		index++;
		for (i = index; i >= 0; i--)
			printf("%c", str[i]);
			printf("\n");

}
