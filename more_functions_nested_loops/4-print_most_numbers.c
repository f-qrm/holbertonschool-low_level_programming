#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 without 2 and 4
 *
 */
void print_most_numbers(void)
{
	char nombre = 48;

	while (nombre <= 57)
	{
		if (nombre != 50 && nombre != 52)
			_putchar(nombre);
		nombre++;
	}
	{
		_putchar('\n');
	}
}
