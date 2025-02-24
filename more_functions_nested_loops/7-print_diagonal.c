#include "main.h"
/**
 * print_diagonal - prints a diagonal line made of backslashes
 *@n: the number of times the backslash character should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
