#include "main.h"
/**
 *times_table - Write a function that prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int hor, ver, rsl;

	for (hor = 0; hor < 10; hor++)
	{
		for (ver = 0; ver < 10; ver++)
		{
			rsl = ver * hor;

			if (ver != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (rsl < 10)
			{
				if (ver != 0)
				{
				_putchar(' ');
				}
				_putchar(rsl + '0');
			}
			else
			{
				_putchar(rsl / 10 + '0');
				_putchar(rsl % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
