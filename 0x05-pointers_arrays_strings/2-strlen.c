#include "main.h"
#include <stdio.h>
/**
 * _strlen(char *s)- length of string
 * @s: variable s
 * Return: s
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;
	putchar('0' + index);
	return (0);
}
