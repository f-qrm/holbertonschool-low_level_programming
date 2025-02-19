#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char rpt = 0;
	char lettre;

	while (rpt <= 10)
	{
		lettre = 97;
		while (lettre <= 122)
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
		rpt++;
	}
}
