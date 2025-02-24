#include "main.h"
/**
 * more_numbers - prints the nombers fro 0 to 9
 *
 */
void more_numbers(void)
{
	char rpt = 0;
	char nombre;

	while (rpt <= 9)
	{
		nombre = 0;
		while (nombre <= 57)
		{
			_putchar(nombre);
			nombre++;
		}
		_putchar('\n');
		rpt++;
	}
}
