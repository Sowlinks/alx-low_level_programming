#include <stdio.h>

/**
 * puts_half- prints half of a string
 * @str: variable s
 * Return: 0
 */

void puts_half(char *str)
{
	int numb = 0;
	int i, half = 0;

	while (str[numb] != '\0')
	{
		numb++;
	if (numb % 2 == 0)
		half = numb / 2;
	else
		half = (numb - 1) / 2;
	for (i = (half - 1); i < numb; i++)
	{
		printf("%d", str[i]);
	}
	
	}

	printf("\n");
}
