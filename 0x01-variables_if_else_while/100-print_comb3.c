#include <stdio.h>

/**
 * main- prints all possible different combos
 * Description: Prints all possible different combos of two digits
 * Return: 0
 */

int main(void)
{
	int first = 0;

	int second = 0;

	while (first < 100)
	{
		putchar('0' + first);

		putchar('0' + second);

		second++;

		if (first < 100)

		{

			putchar (',');

			putchar (' ');

		}


		first++;

	}

	putchar('n');

	return (0);
}
