#include "main.h"
#include <stdio.h>

/**
 * puts2- prints every other cahracter
 * @str: variable str
 * Return: 0
 */

void puts2(char *str)
{
	int index = 0;
	int i;


	while (str[index] != '\0')
		index++;
	for (i = 0; i < index; i++)
		if (i % 2 == 0)
			printf("%c", str[i]);
	printf("\n");
}
