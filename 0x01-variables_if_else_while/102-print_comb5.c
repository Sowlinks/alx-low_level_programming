#include <stdio.h>

/**
 * main- prints all possible different combos
 * Description: Prints all possible different combos of three digits
 * Return: 0
 */

int main(void)
{
int first, second, third, fourth;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			for (third = 0; third  < 10; third++)
			{
				for (fourth = 1; fourth < 10; fourth++)
				{
					if ((third == 0) && (second == 0) && (fourth == 0) && (first == 0))
					{
						continue;
					}
					putchar('0' + first);
					putchar('0' + second);
					putchar(' ');
					putchar('0' + third);
					putchar('0' + fourth);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


putchar('\n');

return (0);
}
