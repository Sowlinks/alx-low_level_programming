#include <stdio.h>

/**
 * main- prints all possible different combos
 * Description: Prints all possible different combos of two digits
 * Return: 0
 */

int main(void)
{

	int first, second;

	for (first = 0; first  < 10; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar('0' + first);

			putchar('0' + second);

			if (first < 8 || second < 9)

			{

				putchar (',');

				putchar (' ');
			}

		}

	}

	putchar('\n');

	return (0);
}
