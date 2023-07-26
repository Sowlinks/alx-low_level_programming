#include <stdio.h>

/**
 * puts_half- prints half of a string
 * @str: variable s
 * Return: 0
 */

void puts_half(char *str)
{
	int index = 0;
	int i, j, half = 0;

	printf("%s", str);
	printf("\n");
	while (str[index] != '\0')
		index++;
		for (i = 0; i < index; i++)
			half = index / 2;
			for (j = half; j < index; j++)
				if (index & 2 != 0)
					printf("%c", str[j + 1]);
				printf("%c", str[j]);

	printf("\n");
}
