#include "main.h"
/**
 *jack_bauer-function that prints every minute of the day of Jack Bauer
 *n from 00:00 to 23:59, min to loop count min while hour to loop count hr
 * and reset mins
 *Return:0
 */
void jack_bauer(void)
{
	int minutes = 0;
	int hours = 0;
	int mins_reminder;
	int hours_reminder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
		mins_reminder = minutes % 10;
		hours_reminder = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(hours_reminder + '0');
		_putchar(':');
		_putchar(minutes / 10 + '0');
		_putchar(mins_reminder + '0');
		minutes++;
		_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
