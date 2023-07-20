#include "main.h"

/**
 * jack_bauer(void)- prints every minute of the day
 * @minsL to denote minutes
 * Description: printsfrom 00:00 to 23:59
 *Return: 0
 */

void jack_bauer(void)
{
	int mins;
	int hours;

	for (hours = 0; hours < 24; hours++)
	{

		for (mins = 0; mins <= 59; mins++)
		{
			if (mins < 10)
			{
				_putchar('0');
			}
			_putchar('0' + hours);
			_putchar(':');

			if (hours < 10)
			{
				_putchar('0');
			}
			_putchar('0' + mins);
			_putchar('\n');
		}
	}
	return (0);
}
