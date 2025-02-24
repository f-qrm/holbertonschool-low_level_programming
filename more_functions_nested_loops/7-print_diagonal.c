#include "main.h"
/**
 * print_diagonal - prints a diagonal line made of backslashes
 *@n: the number of times the backslash character should be printed
 */
void print_diagonal(int n)
{
	int i;
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (e = 0; e < i; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
