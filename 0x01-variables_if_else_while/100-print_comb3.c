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

		if (first < 90)

		{

			putchar (',');

			putchar (' ');

		}


		first++;

		second++;
	}

	putchar('n');

	return (0);
}
