#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 */
void print_alphabet(void)
{
	char lettre = 97;

	while (lettre <= 122)
	{
		_putchar(lettre);
		lettre++;
	}
	{
		_putchar('\n');
	}
}
