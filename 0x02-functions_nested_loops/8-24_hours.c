#include "main.h"

/**
 * jack_bauer(void)- prints every minute of the day
 * @minsL to denote minutes
 * Description: printsfrom 00:00 to 23:59
 *Return: 0
 */

void jack_bauer(void)
{
	int mins, mins2, hours, hours2;

	for (hours = 0; hours < 3; hours++)
	{
		for (hours2 = 0; hours2 <= 9; hours2++)
		{
			for (mins = 0; mins <= 6; mins++)
			{
				for (mins2 = 0; mins2 <= 9; mins2++)
				{
				if (mins > 5)
				{
					continue;
				}
				if (hours == 2 && hours2 > 3)
				{
					continue;
				}
				_putchar('0' + hours);
				_putchar('0' + hours2);
				_putchar(':');
				_putchar('0' + mins);
				_putchar('0' + mins2);
				_putchar('\n');
				}
			}
		}
	}

}
