#include <stdio.h>

/**
 * main - combo of 4 numbers
 * Description: prints a combination of three digits
 *
 * Return: 0
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first  < 10; first++)
	{

		for (second = first + 1; second < 10; second++)
		{
			for (third = second + 1; third < 10; third++)
			{

				putchar('0' + first);

				putchar('0' + second);

				putchar ('0' + third);

				if (first < 7 || second < 8)

				{

					putchar(',');

					putchar(' ');

				}

			}

		}

	}

	putchar('\n');

	return (0);
}
