#include "main.h"
/**
 * print_square - prints a square followed by a new line
 *@size: show size of #
 */
void print_square(int size)
{
	int ver;
	int hor;

	if (size > 0)
	{
		for (ver = 0; ver < size; ver++)
		{
			for (hor = 0; hor < (size - 1); hor++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
