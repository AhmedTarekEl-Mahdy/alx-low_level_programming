#include "main.h"

/**
 * jack_bauer - A function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59 .
 */

void jack_bauer(void)
{
	int hour = 0, min = 0;

	while (hour <= 23)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
		hour++;
	}
}
