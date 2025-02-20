#include "main.h"
/**
 *jack_bauer - prints time
 */
void jack_bauer(void)
{
	int heure;
	int minute;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; heure < 24; heure++)
		{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
