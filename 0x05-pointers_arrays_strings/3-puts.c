#include "main.h"
#include <stdio.h>
/**
 * _puts- prints a string
 * @str: variable str
 * Return: str
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
		index++;
		printf("%s", str);

}
