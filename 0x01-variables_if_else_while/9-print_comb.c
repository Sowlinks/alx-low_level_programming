#include <stdio.h>

/**
 * main - combo of single digit numbers
 * Descriptipn: prints all single digit numbers
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int first = 0;

	while (first < 10)
	{

		putchar('0' + first);

		if (first < 9)

		{
			putchar(',');

			putchar(' ');

		}

		first++;

	}

	putchar('\n');

	return (0);
}
