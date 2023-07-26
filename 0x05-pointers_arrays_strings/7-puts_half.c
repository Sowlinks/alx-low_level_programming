#include <stdio.h>

/**
 * puts_half- prints half of a string
 * @str: variable s
 * Return: 0
 */

void puts_half(char *str)
{
	int numb = 0;
	int i, j, half = 0;

	printf("%s", str);
	printf("\n");
	while (str[numb] != '\0')
	{
		numb++;
		for (i = 0; i < numb; i++)
		{
			if (numb % 2 == 0)
				half = numb / 2;
			else
				half = (numb - 1) / 2;
			for (j = (half - 1); j < numb; j++)
			{
				printf("%c", str[j]);
			}
		}
	}

	printf("\n");
}
